#include <stdio.h>
#include "driver/gpio.h"
#include "sdkconfig.h"
 
/* Can run 'make menuconfig' to choose the GPIO to blink,
   or you can edit the following line and set a number here.
*/
#define GPIO_LED_NUM 4

void app_main(void)
{
    gpio_config_t blink;
    
    blink.pin_bit_mask=(1ULL << GPIO_LED_NUM);
    blink.mode=GPIO_MODE_INPUT_OUTPUT;
    blink.pull_up_en=0;
    blink.pull_down_en=0;
    blink.intr_type=GPIO_PIN_INTR_DISABLE;

    gpio_config(&blink);

    gpio_set_level(GPIO_LED_NUM,1);
    
}