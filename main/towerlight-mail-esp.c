#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "console_task.h"

void app_main(void){

    xTaskCreate(console_task, "console_task", 4096, NULL, 0, NULL);
}
