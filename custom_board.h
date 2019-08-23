/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */
#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "nrf_gpio.h"

// LEDs and buttons definition for PCA20006 board (beacon)
#define LEDS_NUMBER 2

#define LED_CAR_LEFT 47 //32 +15
#define LED_CAR_RIGHT 45
#define LED_RGB_BLUE 30 // no se usa

#define LEDS_ACTIVE_STATE 1

#define BSP_LED_0 LED_CAR_LEFT
#define BSP_LED_1 LED_CAR_RIGHT
#define BSP_LED_2 LED_CAR_LEFT

#define LEDS_LIST               \
  {                             \
    LED_CAR_LEFT, LED_CAR_RIGHT \
  }

#define LEDS_INV_MASK LEDS_MASK

#define BUTTONS_NUMBER 2

#define BUTTON_START 13
#define BUTTON_1 13
#define BUTTON_2 14
#define BUTTON_3 15
#define BUTTON_4 16
#define BUTTON_STOP 16
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST   \
  {                    \
    BUTTON_1, BUTTON_2 \
  }

#define BSP_BUTTON_0 BUTTON_1
#define BSP_BUTTON_1 BUTTON_2

#define CS_FLASH_PIN_NUMBER 4
#define MISO_PIN_NUMBER 7
#define MOSI_PIN_NUMBER 6
#define SCK_PIN_NUMBER 5

#define RX_PIN_NUMBER 8
#define TX_PIN_NUMBER 6
#define CTS_PIN_NUMBER 7
#define RTS_PIN_NUMBER 5

#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
