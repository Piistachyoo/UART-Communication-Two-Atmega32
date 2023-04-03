/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : main.c                    		              	     */
/* Date          : Mar 28, 2023	                                         */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#include "main.h"

void main(){
	UART_vInit(&UART1);
	LCD_4bit_vInit(&LCD1);
	u8 Data;
	while(1){
		Data = UART_u8ReceiveData();
		LCD_4bit_vSendChar(&LCD1, Data);
	}
}
