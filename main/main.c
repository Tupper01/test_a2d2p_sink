// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs.h"
#include "nvs_flash.h"
#include "esp_system.h"
#include "esp_log.h"

#include "esp_bt.h"
#include "bt_app_core.h"
#include "bt_app_av.h"
#include "esp_bt_main.h"
#include "esp_bt_device.h"
#include "esp_gap_bt_api.h"
#include "esp_a2dp_api.h"
#include "esp_avrc_api.h"
#include "driver/i2s.h"
#include "ma_bt_a2dp.h"
#include "MerusAudio.h"
#include "MerusAudio_i2s.h"

static char TAG[] = "app_main";

void app_main(void)
{
    setup_ma120x0();
    ma_setup_i2s();
    /* Initialize NVS — it is used to store PHY calibration data */
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }


    ESP_ERROR_CHECK(err);
    
    // ma120_setup_audio(0x20);
    
    ma_bt_start();

    // for (uint8_t i = 10; i > 0; i--)
    // {
    //     ESP_LOGI(TAG, "i = %d", i);
    //     vTaskDelay(pdMS_TO_TICKS(1000));
    // }

    // ma_bt_stop();

    // for (uint8_t i = 10; i > 0; i--)
    // {
    //     ESP_LOGI(TAG, "i = %d", i);
    //     vTaskDelay(pdMS_TO_TICKS(1000));
    // }

    // ma_bt_start();
}
 