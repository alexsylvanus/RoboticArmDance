How to use

1. Simulink Portion
Open the Simulink file in MATLAB and complete the HDL Workflow
Advisor, setting up the inputs with the correct addresses and the
outputs to the JA[0:4] ports.

2. MATLAB Portion
a. Place the ‘findtempo2.m’ and ‘PlayAltered.m’ along with the songs
in the computers MATLAB folder.

b. Run the shell script “open_matlab_commandline.sh”

*If there is error, you may need to edit the script and change the
pathway to the MATLAB application, my version is 2016a, but the
computers in the library are 2014b. 

c. Once the MATLAB command line opens run the function ‘PlayAltered’
with first input being the filename of a song, and the second 
input being the tempo you’d like to play the song at. When it asks
for a filename, make sure you write it as a wav file, for example,
type <’newaudio.wav’>

3. C++ Portion
a. Load the C++ RoboticArm.cc, RoboticArm.h, Main.cc, and Makefile
onto the ZedBoard.

b. Run the make command on the Linux command line, then run the
sudo ./Main command to start the Main program.

c. Enter the tempo that you put into the MATLAB function.






