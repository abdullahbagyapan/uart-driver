#include "UART.c"
#include <util/delay.h>

int main() {

    UART_Init();

    while (1) {
        
        UART_PutChar('A');
        _delay_ms(100);
    }

    return 0;
}