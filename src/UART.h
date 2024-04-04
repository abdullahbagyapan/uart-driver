/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   04/04/2024
*/

/*================================== Defined Variables ==================================*/

#define BAUD_RATE   115200
#define F_CPU       16000000UL
#define UBRR        F_CPU / 16 / BAUD_RATE - 1

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
 @brief:  Send char to polling

 @author  Abdullah Bagyapan

 @date    04/04/2024

 @param   The character to send to polling

 @return  None
*/
void UART_PutChar(char cData);
