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

/**
 * @brief Set up I2S with MA120x.. and ESP32.
*/

void ma_setup_i2s(void)
{
    i2s_config_t i2s_config = {
#ifdef CONFIG_EXAMPLE_A2DP_SINK_OUTPUT_INTERNAL_DAC
        .mode = I2S_MODE_MASTER | I2S_MODE_TX | I2S_MODE_DAC_BUILT_IN,
#else
        .mode = I2S_MODE_MASTER | I2S_MODE_TX, // Only TX
#endif
        .sample_rate = 44100,
        .bits_per_sample = 32,                        /* 16 */
        .channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT, //2-channels
        .communication_format = I2S_COMM_FORMAT_I2S | I2S_COMM_FORMAT_I2S_MSB,
        .dma_buf_count = 6,
        .dma_buf_len = 60,
        .intr_alloc_flags = 0,     //Default interrupt priority
        .tx_desc_auto_clear = true //Auto clear tx descriptor on underflow
    };

    i2s_driver_install(0, &i2s_config, 0, NULL);
#ifdef CONFIG_EXAMPLE_A2DP_SINK_OUTPUT_INTERNAL_DAC
    i2s_set_dac_mode(I2S_DAC_CHANNEL_BOTH_EN);
    i2s_set_pin(0, NULL);
#else
    i2s_pin_config_t pin_config = {
        .bck_io_num = 25,   //CONFIG_EXAMPLE_I2S_BCK_PIN,
        .ws_io_num = 26,    //CONFIG_EXAMPLE_I2S_LRCK_PIN,
        .data_out_num = 27, //CONFIG_EXAMPLE_I2S_DATA_PIN,
        .data_in_num = -1   //Not used
    };

    i2s_set_pin(I2S_NUM_0 /* 0 */, &pin_config);
#endif
}