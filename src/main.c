#include "uart/UART.h"


int main() {

    UART_Init();

    UART_PutChar('A');
    UART_PutChar('B');
    UART_PutChar('C');


    while (1) {}

    return 0;
}