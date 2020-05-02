#appdev
----------------------------------------------------------------
--------------------Application Development 2020----------------
----------------------------------------------------------------

This project is made in course "Application Development 2020" for us to 
understand what tools and measures will be used in a software application
development.

List of contents
1. Configuration instructions
2. Installation instructions
3. Operating instructions
4. File manifest
5. Copyright and licesning information
6. Contact information
7. Credit and acknowledgments

1. Configuration instructions
	In order to use this application we would need curl library installed on 
	our system, gcc and php.

2. Installation instructions
	In order to install this application, we should download the zip file or 
	clone the repository. Github link: https://github.com/prognikos/appdev,
	or use the command git clone https://github.com/prognikos/appdev.

3. Operating instructions
	In order to build the program, we should type the command make. After make,
	we can see that files are created. In order to run the program, we should
	type the command ./sound

4. File manifest
	We should list all the files of this application here with short
	descriptions.

	List of Files:
	README.md		this file.
	screen.c		contains screen manipulation functions
	screen.h		contains constant definitions and fucntion declarations
					of screen.c
	comm.c			contains a function that sends a POST-request.
	comm.h			contains defintions and function declaration of comm.c
	makefile		contains linking rules, compiling rules, cleaning rules
					and archiving rules. Also some .o files and the name of
					the executable programm after the make command.
	testcurl.c		contains a main function of CURL and a URL definition.
	testscreen.c	contains the main function of our programm, which draws
					animation and some information.
	main.c			contains the logics of our application

5. Copyright
	This application follows GPLv2 copyright.

6. Contact information
	You can contact me at e1900282@edu.vamk.fi
