


-----------------------------------------
build RT
apt-get install linux-image-rt-amd64


nstall linuxcnc:
a. Download the script by executing from the command line:
wget https://www.linuxcnc.org/linuxcnc-install.sh
b. Make it executable:
chmod +x linuxcnc-install.sh
c. Install linuxcnc and its environment:
sudo ./linuxcnc-install.sh




Building LinuxCNC
STUDY
https://gist.github.com/KurtJacobson/f260ff3b2e979f694ed7c1a4c17fa479


apt-get install dpkg-dev
git clone https://github.com/LinuxCNC/linuxcnc.git linuxcnc-dev
cd linuxcnc-dev/debian
./configure uspace
cd ..


------------
 dpkg-checkbuilddeps
OUTPUT
------------
dpkg-checkbuilddeps: error: Unmet build dependencies: debhelper-compat (= 13) dh-python libudev-dev docbook-xsl asciidoc imagemagick asciidoc-dblatex autoconf automake bwidget (>= 1.7) gettext intltool libboost-python-dev libepoxy-dev libgl-dev | libgl1-mesa-dev libglu1-mesa-dev libgtk-3-dev libmodbus-dev (>= 3.0) libgpiod-dev libeditreadline-dev libusb-1.0-0-dev libxmu-dev po4a psmisc python3-dev python3-tk python3-xlib tcl8.6-dev tclx tk8.6-dev xvfb yapps2 dblatex (>= 0.2.12) dvipng graphviz groff inkscape python3-lxml source-highlight texlive-extra-utils texlive-font-utils texlive-fonts-recommended texlive-lang-cyrillic texlive-lang-european texlive-lang-french texlive-lang-german texlive-lang-polish texlive-lang-spanish texlive-latex-recommended w3c-linkchecker xsltproc texlive-xetex

apt-get install debhelper-compat dh-python libudev-dev docbook-xsl asciidoc imagemagick asciidoc-dblatex autoconf automake bwidget gettext intltool libboost-python-dev libepoxy-dev libgl-dev libglu1-mesa-dev libgtk-3-dev libmodbus-dev libgpiod-dev libeditreadline-dev libusb-1.0-0-dev libxmu-dev po4a psmisc python3-dev python3-tk python3-xlib tcl8.6-dev tclx tk8.6-dev xvfb yapps2 dblatex dvipng graphviz groff inkscape python3-lxml source-highlight texlive-extra-utils texlive-font-utils texlive-fonts-recommended texlive-lang-cyrillic texlive-lang-european texlive-lang-french texlive-lang-german texlive-lang-polish texlive-lang-spanish texlive-latex-recommended w3c-linkchecker xsltproc texlive-xetex
-----------
sudo apt-get install libudev-dev
sudo apt-get install libmodbus-dev






cd src
./autogen.sh
./configure --with-realtime=uspace
make
sudo make setuid


---------
output is


[sudo] password for cnc: 
chown root ../bin/rtapi_app
chmod 4750 ../bin/rtapi_app
chown root ../bin/linuxcnc_module_helper
chmod 4750 ../bin/linuxcnc_module_helper

------------



# FINAL STEP
source /home/sab/Desktop/TRY_BUILD/linuxcnc-dev/scripts/rip-environment
source /home/cnc/Desktop/SOFTWARE_INSTALL/linuxcnc-dev/scripts/rip-environment

source /home/sab/Desktop/soft/linuxcnc-dev/scripts/rip-environment






https://forum.linuxcnc.org/18-computer/4743-parallel-port-tester



------------
checking for libmodbus3... no
configure: error: libmodbus3 not found!
install with "sudo apt-get install libmodbus-dev" or disable with
"configure --without-libmodbus"

sudo apt-get install libmodbus-dev

or 

configure --without-libmodbus
------------







http://ftp.debian.org/debian/pool/main/l/linuxcnc/

https://forum.linuxcnc.org/qtvcp/38414-installing-qtvcp

https://162.243.45.186/qtvcp/40429-learning-to-work-with-new-qtvcp-screens-and-handler







sudo dpkg -i linuxcnc-uspace_2.9.1-2_amd64.deb



dpkg: dependency problems prevent configuration of linuxcnc-uspace:
 linuxcnc-uspace depends on python3 (>= 3.11~); however:
  Version of python3 on system is 3.9.2-3.
 linuxcnc-uspace depends on libboost-python1.74.0 (>= 1.74.0+ds1); however:
  Package libboost-python1.74.0 is not installed.
 linuxcnc-uspace depends on libboost-python1.74.0-py311; however:
  Package libboost-python1.74.0-py311 is not installed.
 linuxcnc-uspace depends on libc6 (>= 2.35); however:
  Version of libc6:amd64 on system is 2.31-13+deb11u7.
 linuxcnc-uspace depends on libpython3.11 (>= 3.11.5); however:
  Package libpython3.11 is not installed.
 linuxcnc-uspace depends on libstdc++6 (>= 13.1); however:
  Version of libstdc++6:amd64 on system is 10.2.1-6.
 linuxcnc-uspace depends on libxmu6 (>= 2:1.1.3); however:
  Version of libxmu6:amd64 on system is 2:1.1.2-2+b3.
 linuxcnc-uspace depends on python3-configobj; however:
  Package python3-configobj is not installed.
 linuxcnc-uspace depends on libgtksourceview-3.0-dev; however:
  Package libgtksourceview-3.0-dev is not installed.
 linuxcnc-uspace depends on tk8.6; however:
  Package tk8.6 is not installed.
 linuxcnc-uspace depends on bwidget (>= 1.7); however:
  Package bwidget is not installed.
 linuxcnc-uspace depends on tclreadline; however:
  Package tclreadline is not installed.
 linuxcnc-uspace depends on tclx; however:
  Package tclx is not installed.



Processing triggers for desktop-file-utils (0.26-1) ...
Setting up libxau-dev:amd64 (1:1.0.9-1) ...
Processing triggers for initramfs-tools (0.140) ...
update-initramfs: Generating /boot/initrd.img-5.10.0-27-amd64
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8125b-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8125a-3.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8107e-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8107e-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168fp-3.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168h-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168h-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168g-3.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168g-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8106e-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8106e-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8411-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8411-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8402-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168f-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168f-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8105e-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168e-3.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168e-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168e-1.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168d-2.fw for module r8169
W: Possible missing firmware /lib/firmware/rtl_nic/rtl8168d-1.fw for module r8169
W: Possible missing firmware /lib/firmware/i915/skl_huc_2.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/skl_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/bxt_huc_2.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/bxt_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/kbl_huc_4.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/kbl_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/glk_huc_4.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/glk_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/kbl_huc_4.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/kbl_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/cml_huc_4.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/cml_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/icl_huc_9.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/icl_guc_33.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/ehl_huc_9.0.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/ehl_guc_33.0.4.bin for module i915
W: Possible missing firmware /lib/firmware/i915/tgl_huc_7.5.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/tgl_guc_35.2.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/tgl_huc_7.5.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/tgl_guc_35.2.0.bin for module i915
W: Possible missing firmware /lib/firmware/i915/bxt_dmc_ver1_07.bin for module i915
W: Possible missing firmware /lib/firmware/i915/skl_dmc_ver1_27.bin for module i915
W: Possible missing firmware /lib/firmware/i915/kbl_dmc_ver1_04.bin for module i915
W: Possible missing firmware /lib/firmware/i915/glk_dmc_ver1_04.bin for module i915
W: Possible missing firmware /lib/firmware/i915/cnl_dmc_ver1_07.bin for module i915
W: Possible missing firmware /lib/firmware/i915/icl_dmc_ver1_09.bin for module i915
W: Possible missing firmware /lib/firmware/i915/tgl_dmc_ver2_08.bin for module i915
W: Possible missing firmware /lib/firmware/i915/rkl_dmc_ver2_02.bin for module i915
Processing triggers for hicolor-icon-theme (0.17-2) ...








-----------

build error


cnc@debian:~/Desktop/bash/HAL2UDP/LinuxCNC driver$ ./halcompile --compile udp.comp 
Unable to locate Makefile.modinc


cnc@debian:~/Desktop/bash/HAL2UDP/LinuxCNC driver$ halcompile --install udp.comp 
Compiling realtime udp.c
gcc: warning: driver: linker input file unused because linking not done
gcc: error: driver: linker input file not found: No such file or directory
gcc: warning: driver: linker input file unused because linking not done
gcc: error: driver: linker input file not found: No such file or directory
make: *** [/home/cnc/Desktop/bash/linuxcnc/src/Makefile.modinc:117: udp.o] Error 1



Problem is : 
LinuxCNC driver into LinuxCNC_driver (that space is problem)




-----------


