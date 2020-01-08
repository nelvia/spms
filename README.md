# spms

README

Included:
All source files (.cpp, .h, .pro, .ui, .qrc, .app)
FILE: spms, spms_release
1. spms : this folder contains the source code of the system which can be imported into Qt application to be modified or edited
2. spms_release: this folder contains the released version from Qt 

How to use:
- In this folder, there are two main folders which are spms and spms_release.
- Inside the spms are everything that I have created using C++, OpenCV and Qt Creator. This folder can be imported into Qt Creator if you have the application on your computer. But please ensure that you have OpenCV and CMake installed. Please also change path to the opencv library in your computer in the .pro file of the spms system.
- Inside the spms_release folder, it contains all of the source code in released mode for Qt Creator. When the spms.app is clicked, the system window will be displayed. (Note: This application ONLY work for MacOSX)
- The reportFile.txt can be found inside the spms.app package (right click, choose "show package contents", open Contents file, open MacOs file) 
- If you are unable to run the spms system, please ensure you have Qt Creator 5.8 installed


* Running the system with Qt Creator Application *
- You can either import the project from the spms file or simply go to the spms_release and click on the spms.app (alternatively, you can show package contents and find the executable in MacOS file)
- Please ensure that you have OpenCV and CMake installed. Please also change path to the opencv library in your computer in the .pro file of the spms system.

* Using the system *
- It is easy to use the system as you only have to click the CAPTURE icon to start the evaluation
- Please ensure your webcam is working and connected as the captured frame will be displayed on the application window
- The improvement suggestions will be shown in the bottom box
- Before quiting the program, please ensure you choose the right classroom as this will be saved into reportFile.txt
