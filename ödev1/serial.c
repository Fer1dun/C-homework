#include "arduino-serial-lib.c"
#include "arduino-serial-lib.h"

int main(void)
{
    const char* mes = "a";
    int dev = serialport_init("/dev/ttyACM0", 9600);
    serialport_write(dev, mes);
}
