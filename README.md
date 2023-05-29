# extra-special-sniffer32

Extra SPecial Sniffer 32

ESP-32 Bluetooth Sniffer

Developed using Ubuntu (20.04, 22.04)

## Contributing Authors:

Anthony Frazier <anthonymfrazier1998@gmail.com>

## Setup

1) Install development dependencies for Ubuntu:

```
sudo apt-get install git wget flex bison gperf python3 python3-pip python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0
```

2) [Install the ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html)

```
81  git clone --recursive git@github.com:espressif/esp-idf.git
82  cd esp-idf/
83  ls
84  ./install.sh esp32
85  . ./export.sh
```

3) Build the project

```
idf.py build
```

4) Flash the project on to the device

```
idf.py -p <PORT> flash
```

The device may be monitored over the serial port with the following command:
```
idf.py -p <PORT> monitor
```