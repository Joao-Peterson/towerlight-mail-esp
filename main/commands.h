#ifndef _COMMANDS_HEADER_
#define _COMMANDS_HEADER_

#include <esp_log.h>
#include <esp_err.h>
#include <esp_system.h>

#define TAG (__FILE__)

// ------------------------------------------------------------ Commands -----------------------------------------------------------
int cmd_restart(int argq, char **argv){
    ESP_LOGI(TAG, "Restarting...");
    esp_restart();
}

// ------------------------------------------------------------ Register -----------------------------------------------------------
void commands_register(void){
    esp_console_cmd_t cmd = {
        .command = "restart",
        .help = "Software restart",
        .hint = NULL,
        .func = &cmd_restart,
    };

    ESP_ERROR_CHECK(esp_console_cmd_register(&cmd));
}

#endif