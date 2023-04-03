/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : main.h                             		     	     */
/* Date          : Mar 28, 2023	                                         */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef APPLICATION_MAIN_H_
#define APPLICATION_MAIN_H_

/* Section : Includes */
#include "../MCAL/ATMEGA32/UART/UART_interface.h"
#include "../HAL/LCD/LCD_interface.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
UART_tcfgInitialize UART1 = {
		.GLOBAL_tcfgCharSize = CHAR_8_BITS,
		.GLOBAL_tcfgParityState = PARITY_DISABLED,
		.GLOBAL_tcfgStopBits = STOP_BITS_1,
		.GLOBAL_tcfgUartBaudRate1X = UART_BR1X_9600,
		.GLOBAL_tcfgUartClkMode = UART_ASYNCHRONOUS,
		.GLOBAL_tcfgUartCommMode = UART_1X_SPEED,
		.GLOBAL_tcfgUartInterrupt = UART_INTERRUPT_DISABLED
};
LCD_4bit_cfg LCD1 = {
		.LCD_PORT = PORTC,
		.LCD_RS_PIN = PIN0,
		.LCD_RW_PIN = PIN1,
		.LCD_EN_PIN = PIN2
};
/* Section : Function Declarations */

#endif /* APPLICATION_MAIN_H_ */
