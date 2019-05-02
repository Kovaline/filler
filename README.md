# Filler

Filler is an algorithmic game which consists in filling a grid of a known size in advance with pieces of random size and shapes, without the pieces being stacked more than one square above each other and without them exceeding the grid. If one of these conditions is not met, the game stops.

The goal of project was to write a Filler player who must maximize his points while trying to minimize those of the opponent by eliminating it as quickly as possible.

## Compile and run

To compile programm and run it use:

```
make && ./filler_vm -p1 ./ikovalen.filler -p2 ./players/abanlin.filler -f maps/map00 | ./vizual/vizual
```
