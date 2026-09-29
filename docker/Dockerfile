FROM debian:bookworm-slim

ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=${USER_UID}

RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install --yes --no-install-recommends \
        build-essential \
        binutils-arm-none-eabi \
        ca-certificates \
        gcc-arm-none-eabi \
        git \
        libnewlib-arm-none-eabi \
        libpng-dev \
        python3 \
        python3-pil \
        ripgrep \
    && rm -rf /var/lib/apt/lists/*

RUN groupadd --gid ${USER_GID} ${USERNAME} \
    && useradd --uid ${USER_UID} --gid ${USER_GID} --create-home --shell /bin/bash ${USERNAME}

RUN git config --system --add safe.directory /workspaces/digimon-digital-nexus

USER ${USERNAME}
WORKDIR /workspaces/digimon-digital-nexus
