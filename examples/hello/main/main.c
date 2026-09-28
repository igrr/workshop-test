/*
 * SPDX-FileCopyrightText: 2026 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    for (int i = 0;; i++) {
        printf("Hello from the %s workshop (%d)\n", CONFIG_IDF_TARGET, i);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
