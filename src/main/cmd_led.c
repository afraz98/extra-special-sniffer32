/**
 * @file cmd_led.c
 * @author Anthony Frazier (anthonymfrazier1998@gmail.com)
 * @brief Implements 'LED'
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

// Command headers
#include <stdio.h>
#include "esp_system.h"
#include "esp_log.h"
#include "esp_console.h"
#include "cmd_led.h"

// For LED control
#include "led_strip.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

/* GPIO outout for blink LED --
 * Use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
 * or you can edit the following line and set a number here.
 */
#define BLINK_GPIO CONFIG_BLINK_GPIO

static uint8_t led_state = 0;

void register_led(void){
    // Register LED 'blink' command
    const esp_console_cmd_t blink_cmd = {
        .command = "blink",
        .help = "Blink on-board LED",
        .hint = NULL,
        .func = &led_cmd_blink,
        .argtable = NULL
    }
}

void initialize_led(void) {}

/**
 * @brief Configure GPIO to be toggled for LED interfacing
 * 
 */
void configure_led(void){

}

/**
 * @brief Blink LED when 'blink' command evoked.
 * 
 */
void led_cmd_blink(void){

}