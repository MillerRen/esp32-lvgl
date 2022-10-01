/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"
#include "lvgl_init.h"

void app_main(void)
{

    /* Configure the peripheral according to the LED type */
    xTaskCreatePinnedToCore(guiTask, "gui", 4096*2, NULL, 1, NULL, 1);
    while (1) {
        vTaskDelay(LV_TICK_PERIOD_MS);
    }
}
