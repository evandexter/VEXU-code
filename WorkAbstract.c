// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

// angles
// where we want to be
float targetAngle;
// where we are
float globalAngle;
void setAngle(float angle);
void addAngle(float angle);

// positions
int globalX, globalY;
int targetX, targetY;
void addPosition(int x, int y);
void setPosition(int x, int y);
void addPositionRelative(int dx, int dy);

void pre_auton() {
  bStopTasksBetweenModes = true;
}

task autonomous() {
}

task usercontrol() {
  while (true) {
    UserControlCodePlaceholderForTesting();
  }
}

// sets the target angle relatively
void addAngle(float angle) {
	targetAngle = globalAngle + angle;
}

// sets the target angle absolutely
void setAngle(float angle) {
	targetAngle = angle;
}

// sets the target position relative to the robots position
void addPosition(int x, int y) {
	targetX = globalX + x;
	targetY = globalY + y;
}

// sets the target position to an absolute point
void setPosition(int x, int y) {
	targetX = x;
	targetY = y;
}

// sets the target position relative to the robots position and facing
void addPositionRelative(int dx, int dy) {
	targetX = globalX + (dx * cosDegrees(globalAngle)) + (dy * sinDegrees(globalAngle));
	targetY = globalY - (dx * sinDegrees(globalAngle)) + (dy * cosDegrees(globalAngle));
}
