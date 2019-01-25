#include <wiringPiI2C.h>

const int devld = 0x00 // The address of the arduino

int main()
{
	fd = wiringPiI2CSetup(devld);
  
  wiringPiI2CWriteReg8(fd, 0);
  wiringPiI2CWriteReg8(fd, 0);
  wiringPiI2CWriteReg8(fd, 0);
  
}
