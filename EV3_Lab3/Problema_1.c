
task main()
{
int leftMotor, rightMotor;

moveMotorTarget(leftMotor, 720, 50);
moveMotorTarget(rightMotor, 720, 60);
waitUntilMotorStop(leftMotor);
waitUntilMotorStop(rightMotor);
}
