#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"

void LEDON(int pin)
{
	gpio_set_level(pin,1);
}
void LEDOFF(int pin)
{
	gpio_set_level(pin,0);
}
