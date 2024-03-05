# DirWalk

 A program that scans the file system and outputs it to stdout. The output format is similar to find.

## Build

To build the program `$ make` or `$ make app`.


## Run 

The executable file is available at the path `build/main`.

## Flags

`-f` - to print files </br>
`-l` - to print symbol links </br>
`-d` - to print directories </br>
`-s` - to sort according to `LC_COLLATE` </br>
They can be combined or not installed at all, then all will apply(exc `-s`).
