#pragma config(Motor,	 port2,			frontMotor,				tmotorVex393_MC29, openLoop)
#pragma config(Motor,	 port3,			rightMotor,				tmotorVex393_MC29, openLoop)
#pragma config(Motor,	 port4,			rearMotor,				tmotorVex393_MC29, openLoop)
#pragma config(Motor,	 port5,			leftMotor,				tmotorVex393_MC29, openLoop)

#define LeftX Ch4
#define LeftY Ch3
#define RightX Ch1
#define RightY Ch2

int getRightX();
int getRightY();
int getLeftX();
int getLeftY();
void setMotors(int leftPower, int rightPower, int frontPower, int rearPower);
void setLeftMotor(int power);
void setRightMotor(int power);
void setFrontMotor(int power);
void setRearMotor(int power);

task main()
{
  while(true)
  {
    setMotors(getLeftY() + getRightX(), getLeftY() + getRightX(), getLeftX() + getRightX(), getLeftX() + getRightX());
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

void setMotors(int leftPower, int rightPower, int frontPower, int rearPower)
{
  setLeftMotor(leftPower);
  setRightMotor(rightPower);
  setFrontMotor(frontPower);
  setRearMotor(rearPower);
}

void setRightMotor(int power)
{
  if (power > 127)
    power = 127;
  if (power < -127)
    power = -127;
  motor[rightMotor] = power;
}

void setLeftMotor(int power)
{
  if (power > 127)
    power = 127;
  if (power < -127)
    power = -127;
  motor[leftMotor] = power;
}

void setFrontMotor(int power)
{
  if (power > 127)
    power = 127;
  if (power < -127)
    power = -127;
  motor[frontMotor] = power;
}

void setRearMotor(int power)
{
  if (power > 127)
    power = 127;
  if (power < -127)
    power = -127;
  motor[rearMotor] = power;
}
