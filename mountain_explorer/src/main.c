#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO GPIO_NUM_2  // 보드 내장 LED 핀 번호

void app_main(void)
{
    // GPIO 초기화
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);  // 출력 모드

    while (1) {
        // LED 켜기
        gpio_set_level(LED_GPIO, 1);
        vTaskDelay(500 / portTICK_PERIOD_MS);

        // LED 끄기
        gpio_set_level(LED_GPIO, 0);
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}
