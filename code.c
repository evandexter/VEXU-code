#pragma config(Motor,  port1, frontLeftMotor, tmotorVex393_HBridge, openLoop, reversed, driveRight)
#pragma config(Motor,  port9, fifthWheel,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10, frontRightMotor, tmotorVex393_HBridge, openLoop, driveLeft)
#define LeftX Ch4
#define LeftY Ch3
#define RightX Ch2
#define RightY Ch1

task main()
{
  while(1 == 1)
  {
    if(vexRT[LeftX] != 0)
    {
      motor[frontRightMotor] = -vexRT[LeftX];
      motor[frontLeftMotor] = vexRT[LeftX];
    }
    else
    {
      motor[frontRightMotor] = vexRT[RightX];
      motor[frontLeftMotor] = vexRT[RightX];
      motor[fifthWheel] = -vexRT[RightY];
    }
  }
}
