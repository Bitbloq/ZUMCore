# Zum Core 2
BQ Educación Zum Core board and integration on Arduino IDE.

This is the evolution of the bqZUM Core board available [here](https://github.com/bq/zum).
Main changes are:
1. Move to Bluetooth Low Energy (BLE).
1. Change from ATMega328P to ATMega328PB.

## Getting Started

### Prerequisites

You need to install latest [Arduino IDE](https://www.arduino.cc/en/Main/Software).

This package has been tested on Arduino IDE 2.3.3.

### Installing

To use the integration with Arduino IDE follow these steps:
1. Open Arduino IDE and go into File -> Preferences.
2. On "Additional Boards Manager URLs:" enter the link to [package_zumcore_index.json](https://raw.githubusercontent.com/Bitbloq/ZUMCore/master/package_zumcore_index.json) [right click here and copy link] and press OK.
3. Go to Tools -> Board -> Board Manager and look for "Zum Core by BQ Educación". Install latest version.

Now you can choose your Board **Zum Core 2**.

## Flashing Bootloader

The bootloader can be flashed on Zum Core using another Arduino board as ISP or any other supported ISP programmer.
For further support check this [link](https://www.arduino.cc/en/Tutorial/ArduinoISP).

## License

This project is licensed under the GPL v3 license.

## Credits

This project relies on Arduino IDE to work.

The project is based on [Elektor UNO R4](https://github.com/ElektorLabs/Arduino/) 
