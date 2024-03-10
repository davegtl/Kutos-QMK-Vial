# kutos

* Keyboard Maintainer: [davegtl](https://github.com/davegtl)
* Hardware Supported: *
* Hardware Availability: *



    make kutos:vial

Flashing example for this keyboard:

    qmk flash -kb davegtl/kutos -km vial -bl uf2-split-left
    qmk flash -kb davegtl/kutos -km vial -bl uf2-split-right

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:
* **Physical reset button**: Use a pin and dubbel press through the hole located above thumb key on the front of the PCB
  // Not active
* **Bootmagic reset** /not active: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Keycode in layout** /not active: Press the key mapped to `QK_BOOT` if it is available
