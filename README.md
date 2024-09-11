# LinuxCNC_HowItWorks


**1. LinuxCNC Overview:**

    - LinuxCNC is open-source software for controlling CNC machines.
    - It runs on Linux with a real-time kernel for precise motor control.
    - Commonly used for milling machines, lathes, 3D printers, and robotics.

**2. CNC Machine Components:**

    - Stepper Motors or Servo Motors: Drives the machine's axes.
    - Breakout Boards: Connects the PC (via parallel port or Mesa card) to motor drivers.
    - Motor Drivers: Controls the current and direction to motors.

**3. Parallel Port vs. Mesa Cards:**

    - Parallel Port: Simple, direct connection to motors using a breakout board.
    - Mesa Cards: Provides more I/O ports, better performance, and Ethernet options for real-time control.

**4. Real-time Kernel:**

    - LinuxCNC requires a real-time kernel (RT Kernel) to handle time-sensitive motor controls.
    - A real-time kernel ensures consistent timing, critical for CNC precision.

**5. INI File:**

    - Contains machine-specific settings like stepper motor speed, acceleration, axis configuration, and home positions.
    - You define the machine’s characteristics here.

**6. HAL (Hardware Abstraction Layer):**

    - Defines how software connects to hardware (motors, switches, sensors).
    - You can map physical pins (parallel port or Mesa card) to machine functions (limit switches, step signals).

**7. G-code:**

    - The language that controls CNC machines.
    - Commands like G0, G1 (move commands), M3 (spindle on), and G28 (home the machine) are commonly used.

**8. Configuration Wizard (Stepconf):**

    - A simple way to create a basic machine configuration.
    - Helps set up axis settings, motor step rates, and pin assignments for parallel port connections.

**9. Axis GUI:**

    - The graphical user interface (GUI) for LinuxCNC.
    - Allows you to load G-code, jog axes, set zero positions, and run CNC jobs.

**10. Simulation Mode:**

    - You can run LinuxCNC in simulation mode to learn the interface and run G-code without having a machine connected.
    - Great for beginners to practice and learn before using a real CNC.

**11. Using HALScope:**

    - A tool within LinuxCNC to visualize signals and timings.
    - Helps in debugging and fine-tuning machine movements.

**12. Homing & Limit Switches:**

    - Homing sets a known reference point for each axis.
    - Limit switches stop the machine from overextending beyond its physical range.

**13. Spindle Control:**

    - You can configure spindle speed and direction via G-code commands (e.g., M3, M4, M5).

**14. LinuxCNC Documentation:**

    - [LinuxCNC.org](http://linuxcnc.org/docs/stable/html/) has detailed documentation and a helpful community forum.
    - Provides tutorials, example configurations, and troubleshooting tips.


**15. LinuxCNC [Forum](https://forum.linuxcnc.org/)**

**This forum is an active community where you can:**

    - Ask questions about LinuxCNC setup, troubleshooting, and configuration.
    - Share your CNC projects and solutions.
    - Find detailed discussions about hardware (parallel ports, Mesa cards), software configurations (HAL, INI), and more.
    - Explore beginner tutorials, advanced configurations, and real-world examples.

**16. LinuxCNC buildbot**

    - [buildbot](http://buildbot.linuxcnc.org/dists/buster/master-rtpreempt/)
    - [LINUXCNC_ISO_LIST](https://www.linuxcnc.org/iso/)
    

**17. LinuxCNC install for Debian 12.5 Bookworm and Debian 13 Trixie**

    - [Source](https://forum.linuxcnc.org/9-installing-linuxcnc/51255-latest-official-linuxcnc-iso?start=30)
    - [Tips_for_linuxcnc_install](https://docs.google.com/document/d/1jeV_4VKzVmOIzbB-ytcgsW2I_PhCm1x7oiw8VcLFdiY/edit#heading=h.tfgqketn1slo)

**-----------------------------------------------------**




# IO Expansion for LinuxCNC.

**------------**
**ArduinoConnector**

I have tried it.
**------------**

    - This Project enables you to connect an Arduino to LinuxCNC and provides as many IO's as you could ever wish for. 
    
    - This Software is used as IO Expansion for LinuxCNC.


[Source_code_git](https://github.com/AlexmagToast/LinuxCNC_ArduinoConnector)

[Build_video](https://www.youtube.com/playlist?list=PLdrOU2f3sjtApTdxhmAiXL4lET_ZnntGc)

[Install_tips](https://github.com/AlexmagToast/LinuxCNC_ArduinoConnector/tree/main?tab=readme-ov-file#installation)


sudo pip install pyserial


    Project Homepage: [https://github.com/pyserial/pyserial](https://github.com/pyserial/pyserial)
    Download Page: [https://pypi.python.org/pypi/pyserial](https://pypi.python.org/pypi/pyserial)


**------------**

## To connect LinuxCNC, you have several options depending on your hardware:

**-----------------------------------------------------**

### Parallel Port (LPT):

- Many older CNC machines use the parallel port for real-time control.
- You can connect directly to a CNC machine using a breakout board and the parallel port on a PC running LinuxCNC.
- Configure the parallel port pinout in the LinuxCNC configuration to match the CNC machine’s input/output.

- reference:

**-----------------------------------------------------**

### Mesa Card:

- Mesa cards (e.g., 5i25, 7i76, etc.) are specialized hardware that provides enhanced real-time control over stepper motors and other CNC components.
- It connects to LinuxCNC via PCI or Ethernet and offloads the real-time processing from the PC.
- Mesa cards are a preferred option for professional setups as they provide more stable performance and additional I/O options.

- reference:

**-----------------------------------------------------**

### Raspberry Pi:

- LinuxCNC can run on a Raspberry Pi, but real-time performance is limited. It can be used for less demanding setups or non-real-time tasks.
- Use a Raspberry Pi with a Mesa card over Ethernet for better control.
-  A real-time kernel is required to achieve better timing accuracy.

- reference:

**-----------------------------------------------------**

### ESP32 with W5500 modules.
- External step generator and IO interface for LinuxCNC over Ethernet with dual-core ESP32 and W5500 modules.
- The hardware is connected to LinuxCNC over Ethernet. The controller operates in position mode at low speed and at higher speeds in velocity mode.

**------------**

**First Method**

I have tried it.

**------------**

**reference:**

- [Source_Code_HAL2UDP](https://github.com/jzolee/HAL2UDP)

- [BuildTutorial](https://www.youtube.com/watch?v=nlE2203Q3XI)

- [Source_Test](https://www.youtube.com/watch?v=UXWcg7PwRJs)

- [Source: Tested myself]()

**esp32-pinout:**

- [SITE](https://www.electronicshub.org/esp32-pinout/)

- [ESP-WROOM-32-Pinout](https://github.com/Deotti-cl/linuxcnc-esp32/)

- [ESP32-Pinout](https://www.electronicshub.org/wp-content/uploads/2021/02/ESP32-Pinout-1.jpg)

**------------**
**Second Method**
Haven't tried it yet.
**------------**

- [SITE](https://forum.linuxcnc.org/18-computer/42414-linuxcnc-esp32-software-stepping-over-ethernet-using-esp32)



- [Video](https://www.youtube.com/watch?v=_Goi4YVU0js)



**------------**
**Third Method**
**------------**

- [Source_Code_GitURL](https://github.com/wezhunter/ESP32_LinuxCNC_MotionController_RealTime)

- [ESP32_LinuxCNC_Wireless_Client](https://github.com/wezhunter/ESP32_LinuxCNC_Wireless_Client)

- [Videos](https://www.youtube.com/@linuxcnc-esp32-motion/videos)


- [Linuxcnc_Talk](https://forum.linuxcnc.org/18-computer/51816-esp32-s2-s3-linuxcnc-controller-6-axis-hardware-step-gen-usb-plug-and-play)

**------------**
**Fourth Method**
**------------**

- [Source_Code_GitURL](https://github.com/ryba-xek/linuxcnx-esp32-idf)

- [Y_video](https://www.youtube.com/watch?v=vPD6x1c9KEo)

- [WhoIsCreator](https://www.facebook.com/engautomationone/)


**------------**
**EXTRA Method**
**------------**


https://github.com/dlhenke/linuxcnc-config

https://github.com/ldijkman/WT32-ETH01-LAN-8720-RJ45-

https://github.com/Xinyuan-LilyGO/LilyGO-T-ETH-Series

STUDY
https://forum.linuxcnc.org/24-hal-components/52994-how-to-invert-gpio-xdir-pin-output-on-rpi5-parallel-port#303311


Other_Board_0
https://forum.linuxcnc.org/18-computer/39037-linuxcnc-orange-pi-allwincnc
https://allwincnc.github.io/


extra video
https://www.analog.com/en/product-category/motor-and-motion-control.html#c2378

Notes:

https://forum.linuxcnc.org/27-driver-boards/46770-driver-firmware-pcb-for-pi-rp2040-pio-i-e-an-easy-to-configure-fpga-like-card?start=10
https://linuxgizmos.com/wiznet-board-features-raspberry-pi-2040-and-hardwired-internet-controller-chip/


**-----------------------------------------------------**



> [!NOTE]
> Each option has its own configuration needs within LinuxCNC’s INI and HAL files.


