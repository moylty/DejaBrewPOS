# Compiling

Compiled binaries are available in the releases page, but if you wish to compile the code for yourself, this is how you do it.

# Linux

## Requirements
Compling the code requires the Qt 5 development libraries and tools.

### Debian-based distros
```
sudo apt-get install qtbase5-dev qt5-default
```
### Arch-based distros
```
sudo pacman -S qt5-base
```

### Other
Check your distro's repositories for Qt 5 development packages. If all else fails, you can obtain them from the [Qt downloads page](https://qt.io/download/)

Then, to compile run these commands:
```
cd qtc-part2/
qmake && make clean
make
```

# Windows

## Requirements

The process of installing the requirements is more complicated on windows. **It always is.**
To compile on windows, you will need to install the Qt MinGW environment. Then, must compile
the code from within that environment.

Qt MinGW can be obtained [here.](https://qt.io/download/)

Then, to compile the code:
```
cd ...\qtc-part2\
qmake
make clean
make
```