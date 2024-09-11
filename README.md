# LinuxCNC_HowItWorks


## To connect LinuxCNC, you have several options depending on your hardware:

### Parallel Port (LPT):

- Many older CNC machines use the parallel port for real-time control.
- You can connect directly to a CNC machine using a breakout board and the parallel port on a PC running LinuxCNC.
- Configure the parallel port pinout in the LinuxCNC configuration to match the CNC machine’s input/output.

- reference:

### Mesa Card:

- Mesa cards (e.g., 5i25, 7i76, etc.) are specialized hardware that provides enhanced real-time control over stepper motors and other CNC components.
- It connects to LinuxCNC via PCI or Ethernet and offloads the real-time processing from the PC.
- Mesa cards are a preferred option for professional setups as they provide more stable performance and additional I/O options.

- reference:

### Raspberry Pi:

- LinuxCNC can run on a Raspberry Pi, but real-time performance is limited. It can be used for less demanding setups or non-real-time tasks.
- Use a Raspberry Pi with a Mesa card over Ethernet for better control.
-  A real-time kernel is required to achieve better timing accuracy.

- reference:


### ESP32 with W5500 modules.
- External step generator and IO interface for LinuxCNC over Ethernet with dual-core ESP32 and W5500 modules.
- The hardware is connected to LinuxCNC over Ethernet. The controller operates in position mode at low speed and at higher speeds in velocity mode.

reference:
[HAL2UDP](https://github.com/jzolee/HAL2UDP)
[BuildTutorial](https://www.youtube.com/watch?v=nlE2203Q3XI)
[Test](https://www.youtube.com/watch?v=UXWcg7PwRJs&ab_channel=jzolee)

esp32-pinout:
[SITE](https://www.electronicshub.org/esp32-pinout/)
[ESP-WROOM-32-Pinout](https://www.electronicshub.org/wp-content/uploads/2021/02/ESP-WROOM-32-Pinout.jpg)
[ESP32-Pinout](https://www.electronicshub.org/wp-content/uploads/2021/02/ESP32-Pinout-1.jpg)





> [!NOTE]
> Each option has its own configuration needs within LinuxCNC’s INI and HAL files.


