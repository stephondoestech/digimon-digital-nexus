"""All File Island maps, in map-group order (new maps go at the end to keep IDs stable)."""
from . import east, forest, north, south, west

MAPS = [*south.maps(), *forest.maps(), *west.maps(), *north.maps(), *east.maps()]
