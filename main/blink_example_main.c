#include <stdio.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "unistd.h"
#include "LED.h"

#define pin 23
void app_main(void)
{
	gpio_reset_pin(pin);
	gpio_set_direction(pin,GPIO_MODE_OUTPUT);



	while(true)
	{
		LEDON(pin);
		sleep(1);
		LEDOFF(pin);
		sleep(1);
	}
}
