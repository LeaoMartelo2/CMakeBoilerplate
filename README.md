# CMakeFilesBoilerPlate


This is a simple program to quickly generate  "CMakeFiles.txt" boilerplate.

Its mostly for personal use, but i don't see a reason not to share it on GitHub.

## Compiling

The program is written in C++ and can be compiled with:

Linux:

    g++ main.cpp -o CMakeBoilerplate
   
   Windows: 
   

    g++ main.cpp -o CMakeBoilerplate.exe
   
   (Requires C++17+ compatible compiler)

## Making it a global program



Adding program to your system Path (Linux):

 There are 2 methods to add a global program to your system, the /usr/bin method, and the local method

 - /usr/bin method
 
	    # mv CMakeFilesBoilerplate /usr/local/bin
	    # chmod +x /usr/local/bin/CMakeFilesBoilerplate

- local method:

Use any text editor of your liking to modify `~/.bashrc` (or any shell that you use) and add the line:

	export PATH=$PATH:/path/to/directory/containing/executable
After that make sure to run `source ~/.bashrc` (or any shell that you use)
to apply the changes.

Also make sure to update the shell rc if the program path changes.

## Usage

You can also use the file locally without adding it to your system's path, just make sure you parse the correct file path.
Using the program is as simple as typing: 

    CMakeBoilerPlate <c_make_version> <project name>
   
   If the project name contains a space, it obviously needs to be in between quotes, but its not advisable to do it in the first place.

