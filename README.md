# CMakeFilesBoilerPlate


This is a simple program to quickly generate  "CMakeFiles.txt" boilerplate.

Its mostly for personal use, but i don't see a reason not to share it on GitHub.

The program is written in C++ and can be compiled with:

Linux:

    g++ main.cpp -o CMakeBoilerplate
   
   Windows: 
   

    g++ main.cpp -o CMakeBoilerplate.exe
   
   (Requires C++17+ compatible compiler)

Usage: open the file locally or copy it to your systems $PATH (making it a system wide command)

and run:

    CMakeBoilerPlate <c_make_version> <project name>
   
   If the project name contains a space, it obviously needs to be in between quotes, but its not advisable to do it in the first place.

