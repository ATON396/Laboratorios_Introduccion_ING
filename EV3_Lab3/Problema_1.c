
task main()
{
	moveMotorTarget(leftMotor, 720, 50);
moveMotorTarget(rightMotor, 720, 50);
waitUntilMotorStop(leftMotor);
waitUntilMotorStop(rightMotor);
}
