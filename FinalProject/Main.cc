#include "RoboticArm.h"
#include <unistd.h>
#include <iostream>
#include <cmath>
using namespace std;


// Physical base address of GPIO

int main()
{
double tempo;
double Time;
std::cout << "Enter a Tempo: ";
std::cin >> tempo;
Time = 60*1000/tempo;
RoboticArm robotic_arm;
while(true)
{
	robotic_arm.MoveServo(2, 60, tempo);
	usleep(1000*Time);
	robotic_arm.MoveServo(2, 120, tempo);
	usleep(1000*Time);	
}
return 0;
}

