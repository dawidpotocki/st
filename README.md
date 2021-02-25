# st

*Personal fork of st (simple terminal) from suckless.org*

## Installation

Make sure you have dependencies installed before you build dwm.

### Dependencies

```sh
$ sudo pacman -S libx11 libxinerama libxft freetype2  # Arch Linux
```

### Building

```sh
$ git clone https://git.dawidpotocki.com/dawid/st
$ cd st
$ sudo make clean install
```

If you did not install st with `make clean install`, you must compile the st
terminfo entry with the following command:

```sh
$ sudo tic -sx st.info
```

## Patches

- [externalpipe](https://st.suckless.org/patches/externalpipe/)
- [scrollback](https://st.suckless.org/patches/scrollback/)
- [scrollback-mouse-altscreen](https://st.suckless.org/patches/scrollback/)
