
# UART-Communication-Two-Atmega32
## Project Description
The project consists of two AVR Atmega32 connected using UART protocol, first Atmega32(sender) sends numbers from 0 to 9 when you press a push button, and second Atmega32(receiver) displays the number on LCD.

## Project Design
The program starts with initializing UART protocol and LCD screen on 4-bit mode, then waits for the user to press the pushbutton on the sender MCU, when any character is sent, it's shown on the LCD connected to the receiver MCU.



## Configurations and Connections

 **All Configurations are available for change in /Application/application.h**

- UART used on both MCU and its configuration: 

> 8-bit width data 

   > No parity checking
   
   > 1 Stop bit 
   
   > 9600 baud rate

- LCD is connected to port C and working in 4-bit mode.

**Peripherals used:**
- DIO
- UART

## Files

 - **Application:** Contains program main
 - **HAL:** Hardware architecture layer: contains software related to any onboard hardware element
 - **MCAL:** Microcontroller architecture layer: contains software related to any peripheral inside the microcontroller
 - **Services:** Contains my data types and some bit math operations
