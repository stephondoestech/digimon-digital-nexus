"""Small drawing helper that produces the ASCII grids build.py consumes.

Characters: 'T'/'t' tree (2x2: "Tt" over "tt"), '.' floor, ',' tall grass,
'~' water, ':' sand, 'i' ice, '#' wall. Trees snap to the even 2x2 grid so
forests from neighbouring maps line up across connections.
"""


class Canvas:
    def __init__(self, width, height, fill="."):
        assert width % 2 == 0 and height % 2 == 0
        self.width, self.height = width, height
        self.cells = [[fill] * width for _ in range(height)]

    def rect(self, char, x0, y0, x1, y1):
        """Fill the inclusive rectangle; clears any tree it cuts, whole tree at a time."""
        for y in range(max(0, y0), min(self.height, y1 + 1)):
            for x in range(max(0, x0), min(self.width, x1 + 1)):
                self._clear_tree(x, y)
                self.cells[y][x] = char
        return self

    def forest(self, x0=0, y0=0, x1=None, y1=None):
        x1 = self.width - 1 if x1 is None else x1
        y1 = self.height - 1 if y1 is None else y1
        for y in range(y0 - y0 % 2, y1 + 1, 2):
            for x in range(x0 - x0 % 2, x1 + 1, 2):
                if y + 1 < self.height and x + 1 < self.width:
                    self.cells[y][x], self.cells[y][x + 1] = "T", "t"
                    self.cells[y + 1][x], self.cells[y + 1][x + 1] = "t", "t"
        return self

    def border_forest(self, thickness=2):
        self.forest()
        return self.rect(".", thickness * 2, thickness * 2, self.width - thickness * 2 - 1,
                         self.height - thickness * 2 - 1)

    def _clear_tree(self, x, y):
        if self.cells[y][x] not in "Tt":
            return
        tx, ty = x - x % 2, y - y % 2
        for cy in (ty, ty + 1):
            for cx in (tx, tx + 1):
                if cy < self.height and cx < self.width and self.cells[cy][cx] in "Tt":
                    self.cells[cy][cx] = "."

    def ascii(self):
        return "\n".join("".join(row) for row in self.cells)
