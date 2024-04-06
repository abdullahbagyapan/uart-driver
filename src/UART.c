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
    
    // Set baudrate
    UBRR0H = (uint8_t)(UBRR >> 8);
    UBRR0L = (uint8_t) UBRR;

    // Set frame format: 8data, 1stop bit
    UCSR0C |= _BV(UCSZ00) | _BV(UCSZ01) | _BV(USBS0);
    
    // Enable transmitter and receiver
    UCSR0B |= _BV(TXEN0) | _BV(RXEN0);

    // Enable interrupt for RX complete
    UCSR0B |= _BV(RXCIE0);

}



void UART_PutChar(char cData) {

    // Wait for empty transmit buffer
    while (!(UCSR0A & (1<<UDRE0)));

    // Put data into buffer
    UDR0 = cData;

}



uint8_t UART_GetChar(void) {

    // Wait for data to be received
    while (!(UCSR0A & (1<<RXC0)));

    // Get received data from buffer
    return UDR0;

}