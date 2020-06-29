/*RxTx.h

-contains all routines requried for random address generation, transmit and 
receive
*/

void createRandomAddress(void);
void transmitData(int addr, signed char rssi,  char msg[MESSAGE_LENGTH] );
void transmitDataString(char addr[4],char rssi[3], char msg[MESSAGE_LENGTH] );
void TXString( char* string, int length );