#include "uart/UART.h"
#include <avr/interrupt.h>


int main() {

    UART_Init();

    // Enable global interrupts
    sei();

    while (1) {}

    return 0;
}