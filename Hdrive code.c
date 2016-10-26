#pragma config(Motor,  port1, leftMotor, tmotorVex393_HBridge, openLoop, reversed, driveRight)
#pragma config(Motor,  port9, fifthWheel,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10, rightMotor, tmotorVex393_HBridge, openLoop, driveLeft)

#define LeftX Ch4
#define LeftY Ch3
#define RightX Ch2
#define RightY Ch1

int getRightX();
int getRightY();
int getLeftX();
int getLeftY();
void setMotors(int leftPower, int rightPower, int midPower);
void setLeftMotor(int power);
void setRightMotor(int power);
void setMidMotor(int power);

task main()
{
  while(true)
  {
    setMotors(getLeftY() + getRightX(), getLeftY() - getRightX(), getLeftX());
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

void setMotors(int leftPower, int rightPower, int midPower)
{
  setLeftMotor(leftPower);
  setRightMotor(rightPower);
  setMidMotor(midPower);
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

void setMidMotor(int power)
{
  if (power > 127)
    power = 127;
  if (power < -127)
    power = -127;
  motor[fifthWheel] = power;
}
