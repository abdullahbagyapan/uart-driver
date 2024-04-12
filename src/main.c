#include "uart/UART.h"
#include <avr/interrupt.h>


int main() {

    UART_Init();

    // Enable global interrupts
    sei();

    UART_PutString("Hello World \r\n");
    
    while (1) {};

    return 0;
}