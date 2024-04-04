/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   04/04/2024
*/


/*================================== Libraries ==================================*/


// Module's own header
#include "UART.h"

// AVR libraries
#include <avr/io.h>



/*================================== Functions ==================================*/



void UART_Init() {

    // Operation mode: Asynchronous USART
    UCSR0C &= ~_BV(UMSEL00) | ~_BV(UMSEL01);
    
    // Set normal mode
    UCSR0A &= ~_BV(U2X0);

    // Set baudrate
    UBRR0H = (uint8_t)(UBRR >> 8);
    UBRR0L = (uint8_t) UBRR;

    // Set frame format: 8data, 1stop bit
    UCSR0C |= _BV(UCSZ00) | _BV(UCSZ01) | _BV(USBS0);
    
    // Enable transmitter
    UCSR0B |= _BV(TXEN0) | _BV(TXCIE0);

}



void UART_PutChar(char cData) {

    // Wait for empty transmit buffer
    while (!(UCSR0A & (1<<UDRE0)));

    // Put data into buffer
    UDR0 = cData;

}