/* Copyright (c) Rigado, LLC. All Rights Reserved.
 *
 * The information contained herein is property of Rigado, LLC.
 * Terms and conditions of usage are described in detail in BMD-200
 * Software License Agreement.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 * USING THIS FILE
 * For use with the Nordic Semiconductor SDK and Keil.
 * Install Nordic Semiconductor libraries via the Pack Installer, and place
 * custom_board.h in <Keil Install Folder>\ARM\Pack\NordicSemiconductor\nRF_
 * Examples\7.1.0\bsp. Set compiler define BOARD_CUSTOM, removing any other
 * BOARD_* define. For more detailed guidance, see the BMD-200-EVAL-UG 
 * document at wwww.rigado.com
 */
#ifndef __BMD200_H__
#define __BMD200_H__

#define LEDS_NUMBER    3

#define LED_RED        1
#define LED_GREEN      24
#define LED_BLUE       25

#define LEDS_LIST 	  { LED_RED, LED_GREEN, LED_BLUE }

#define BSP_LED_0      LED_RED
#define BSP_LED_1      LED_GREEN
#define BSP_LED_2      LED_BLUE

#define BSP_LED_0_MASK (1<<BSP_LED_0)
#define BSP_LED_1_MASK (1<<BSP_LED_1)
#define BSP_LED_2_MASK (1<<BSP_LED_2)

#define LEDS_MASK      (BSP_LED_0_MASK | BSP_LED_1_MASK | BSP_LED_2_MASK)
/* all LEDs are lit when GPIO is high */
#define LEDS_INV_MASK  0

#define BUTTONS_NUMBER 2

#define BUTTON_1       0
#define BUTTON_2       11

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_LIST { BUTTON_1, BUTTON_2, }

#define BSP_BUTTON_0   BUTTON_1
#define BSP_BUTTON_1   BUTTON_2

#define BSP_BUTTON_0_MASK (1<<BSP_BUTTON_0)
#define BSP_BUTTON_1_MASK (1<<BSP_BUTTON_1)

#define BUTTONS_MASK   0x00000801000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

#define RX_PIN_NUMBER  8
#define TX_PIN_NUMBER  9
#define CTS_PIN_NUMBER 4 //2
#define RTS_PIN_NUMBER 5 //3
#define HWFC           false

//#define SPIM0_SCK_PIN       0     /**< SPI clock GPIO pin number. */
//#define SPIM0_MOSI_PIN      1     /**< SPI Master Out Slave In GPIO pin number. */
//#define SPIM0_MISO_PIN      2     /**< SPI Master In Slave Out GPIO pin number. */
//#define SPIM0_SS_PIN        0     /**< SPI Slave Select GPIO pin number. */

//#define SPIS_SCK_PIN       11     /**< SPI clock GPIO pin number. */
//#define SPIS_MOSI_PIN      12     /**< SPI Master Out Slave In GPIO pin number. */
//#define SPIS_MISO_PIN      13     /**< SPI Master In Slave Out GPIO pin number. */
//#define SPIS_CSN_PIN       14     /**< SPI Chip Select GPIO pin number. */

#endif // __BMD200_H__
