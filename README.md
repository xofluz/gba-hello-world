# GBA Hello World

A pretty overengineered hello world program that draws letters on the screen in graphic mode 3.

The original goal was to test the toolchain and test simple pixel-based graphics. It turned into further developing the linker script and crt0.

## Build

To build:
```console
make
```

The project is built with Clang and linked with LLD. After build, the ROM is patched with logo and checksum using [gbafix](https://github.com/rust-console/gbafix).

The final target is the file `build/release/bin/hello.gba`.

To build with debug flags for easier `objdump` inspection:
```console
make debug
```

To clean up:
```console
make clean
```

To generate compiler flags to be used by an LSP:
```console
make flags
```

## Output

If the build succeeds, `hello.gba` can be run in a GBA emulator (or on real hardware) and should show the following after boot:

![image shown on the GBA screen after booting hello.gba](figures/hello-0.png)
