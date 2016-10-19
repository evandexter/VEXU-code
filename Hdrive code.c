#pragma config(Motor,  port1, frontLeftMotor, tmotorVex393_HBridge, openLoop, reversed, driveRight)
#pragma config(Motor,  port9, fifthWheel,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10, frontRightMotor, tmotorVex393_HBridge, openLoop, driveLeft)
#define LeftX Ch4
#define LeftY Ch3
#define RightX Ch2
#define RightY Ch1

task main()
{
  while(true)
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

int getRightX()
{
  return vexRT[RightX];
}

int getRightY()
{
  return vexRT[RightY];
}

int getLeftX()
{
  return vexRT[LeftX];
}

int getLeftY()
{
  return vexRT[LeftY];
}

void setMotors()
{
  
}

void setFrontRightMotor(int power)
{
  motor[frontRightMotor] = power;
}

void setFrontLeftMotor(int power)
{
  motor[frontLeftMotor] = power;
}

void setBackRightMotor(int power)
{
  motor[frontRightMotor] = power;
}

void setFrontLeftMotor(int power)
{
  motor[frontLeftMotor] = power;
}
