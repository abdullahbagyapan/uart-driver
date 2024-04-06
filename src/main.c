#include "uart/UART.c"


int main() {

    UART_Init();

    UART_PutChar('A');
    
    while (1) {

        // Loopback
        uint8_t ui8Data = UART_GetChar();
        UART_PutChar(ui8Data);

    }

    return 0;
}