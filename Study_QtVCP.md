# install tip
https://forum.linuxcnc.org/qtvcp/38414-installing-qtvcp
https://raw.githubusercontent.com/LinuxCNC/linuxcnc/master/lib/python/qtvcp/designer/install_script

Location of files
/home/cnc/.designer/plugins/python



error
https://gist.github.com/KurtJacobson/df409ad48ad88ec227620ccd292403cc





find the lcation


import PyQt5
print(PyQt5.__file__)


copy to paste the files

sudo xdg-open PyQt5


>>> print(PyQt5.__file__)
/usr/lib/python3/dist-packages/PyQt5/__init__.py
/usr/lib/python3/dist-packages/qtvcp/plugins/qtvcp_plugin.py 



run 
designer -qt=5

-------------
ii  python3-pyqt5.qsci                             2.13.3+dfsg-3                       amd64        Python 3 bindings for QScintilla 2 with Qt 5

this package is very import for linuxcnc
if any error reinstall it




                      
--------------

-----------------------

main window --- > create
remove manubar and statusbar

---------------
linuxcnc - Controller

Goto search ----> opt
ScreenOption ---> drag to centralwidget
then select Mainwindow ---> right click ---> lay out --> lay out in a Grid
then select centralWidget ---> layout --> All Margin and Spacing value = 0

Goto search ----> frame
	---> drag to screen_options ---> change the size what you need 
	
Goto search ----> GcodeGr
	---> drag to screen_options ---> right click ---> lay out --> lay out in a Grid

Goto search ----> Push Button
	---> drag to drop in frame  ---> 4 buttons ---- > arrange the properly
	then select frame ---> layout --> All Margin and Spacing value = 0

then select Mainwindow
	then goto Property --- > geometry --> width = 1200 height = 700


then change PushButton values  ---- > z , clear , + , -

then select gcodegraphics ----> then goto Property ---> _view = z , _dro = check, _dtg =uncheck, background_color = 0,0,0




