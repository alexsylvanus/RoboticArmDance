#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

class RoboticArm
{
 // File descriptor for memory-mapped I/O
 int fd;
 // Mapped address
 char *ptr;
 // Write a value into the given memory offset in the memory-mapped I/O.
 void RegisterWrite(unsigned offset, unsigned value);
public:
 // Class constructor
 RoboticArm();
 // Destructor
 ~RoboticArm();
 // Move a servo to a target position with the given speed. ARgument
 // 'angle' is a value between 0 and 180. Argument 'speed' in an integer
 // greater than 0, given in angles per second.
 //
 // Argument 'id' can take the following values:
 // 0 - Base
 // 1 - Bicep
 // 2 - Elbow
 // 3 - Wrist
 // 4 - Gripper
 //
 void MoveServo(int id, int angle, int speed);
int RegisterRead(unsigned offset);
};

#endif
