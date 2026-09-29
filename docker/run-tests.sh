#!/usr/bin/env bash
set -euo pipefail

# Run a read-only mounted ELF; patch only the disposable container copy.
test_elf="${1:-/work/pokeemerald-test.elf}"
test_filters=("Agumon" "Digivice")
if (( $# > 1 )); then
    test_filters=("${@:2}")
fi
if [[ ! -f "$test_elf" ]]; then
    echo "Build pokeemerald-test.elf in the development container first." >&2
    exit 2
fi
test_dir="$(mktemp -d /tmp/digimon-tests.XXXXXX)"
cp "$test_elf" "$test_dir/tests.elf"
patch-test-elf "$test_dir/tests.elf" gTestRunnerHeadless '\x01' \
    gTestRunnerSkipIsFail '\x01'
# Hydra invokes this repository-relative helper when splitting test shards.
mkdir -p "$test_dir/tools/patchelf"
cp /usr/local/bin/patch-test-elf "$test_dir/tools/patchelf/patchelf"
cd "$test_dir"
for test_filter in "${test_filters[@]}"; do
    patch-test-elf "$test_dir/tests.elf" gTestRunnerArgv "${test_filter}\\0"
    mgba-rom-test-hydra mgba-rom-test arm-none-eabi-objcopy "$test_dir/tests.elf" \
        | tee "$test_dir/results.log"
    # The upstream runner can exit successfully without executing any tests.
    if ! grep -q 'Tests .*TOTAL' "$test_dir/results.log"; then
        echo "No test results were produced; this is not a passing run." >&2
        exit 1
    fi
done
