/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   04/04/2024
*/


/*================================== Libraries ==================================*/


// Standart libraries
#include <stdint.h>


/*================================== Defined Variables ==================================*/

#define BAUD        115200
#define F_CPU       16000000UL
#define UBRR        F_CPU / 16 / BAUD - 1



/*================================== Functions ==================================*/


/*
 @brief:  Initialize UART module

 @author  Abdullah Bagyapan

 @date    04/04/2024

 @param   None

 @return  None
*/
void UART_Init();



/*
 @brief:  Send char to TX buffer

 @author  Abdullah Bagyapan

 @date    04/04/2024

 @param   The character to send to TX buffer

 @return  None
*/
void UART_PutChar(char cData);




/*
 @brief:  Get char from RX buffer

 @author  Abdullah Bagyapan

 @date    05/04/2024

 @param   None

 @return  The character from RX buffer
*/
uint8_t UART_GetChar(void);