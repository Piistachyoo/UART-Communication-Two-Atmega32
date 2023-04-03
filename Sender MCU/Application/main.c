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
	PBD_vInit(&PB1);
	u8 Data = '5', PB_State;
	u8 i= 48;
	while(1){
		PBD_vGetButtonState(&PB1, &PB_State);
		if(PB_State == BUTTON_PRESSED){
			UART_vSendData(i);
			i++;
		}
     }
}
