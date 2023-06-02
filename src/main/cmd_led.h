/**
 * @file cmd_led.h
 * @author Anthony Frazier (anthonymfrazier1998@gmail.com)
 * @brief Defines LED command
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Register LED command as part of the CLI command structure
 * 
 */
void register_led(void);

/**
 * @brief Initialize LED command to ensure LED is toggled when invoked
 * 
 */
void initialize_led(void);

/**
 * @brief Blink LED when 'blink' command evoked.
 * 
 */
void led_cmd_blink(void);

#ifdef __cplusplus
}
#endif