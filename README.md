
# UART-Communication-Two-Atmega32
## Project Description
Project consists of two AVR Atmega32 connected using UART protocol, first Atmega32(sender) sends numbers from 0 to 9 when you press on a push button, and second Atmega32(receiver) displays number on LCD.

## Project Design
Program starts with initializing UART protocol and LCD screen on 4-bit mode, then waits for the user to press the pushbutton on the sender MCU, when any character is send, it's shown on the LCD connected on the receiver MCU.



## Configurations and Connections

 **All Configurations are available for change in /Application/application.h**

- UART used on both MCU and it's configuration: 

> 8 bit width data 

   > No parity checking
   
   > 1 Stop bit 
   
   > 9600 baud rate

- LCD is connected to port C and working in 4-bit mode..

**Peripherals used:**
- DIO
- UART

## Files

 - **Application:** Contains program main
 - **HAL:** Hardware architecture layer: contains software related to any on-board hardware element
 - **MCAL:** Microcontroller architecture layer: contains software related to any peripheral inside the microcontroller
 - **Services:** Contains my data types and some bit math operations
