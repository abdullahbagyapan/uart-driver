#include "uart/UART.h"


int main() {

    UART_Init();


    while (1) {
        UART_PutChar('A');
        UART_PutChar('B');
        UART_PutChar('C');

        UART_PutChar('\r');
        UART_PutChar('\n');
    }

    return 0;
}