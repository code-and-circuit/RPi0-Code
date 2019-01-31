#include <wiringPiI2C.h>

const int devld = 0x00; // The address of the arduino

int main()
{
	int fd = wiringPiI2CSetup(devld);
	
	wiringPiI2CWrite(fd, 103);
	wiringPiI2CWrite(fd, 0);
	wiringPiI2CWrite(fd, 0);
	wiringPiI2CWrite(fd, 0);
  
}
