#include "mcc_generated_files/system.h"
#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/uart1.h"
#include <string.h>

char ReceivedData = 0;
//extern uint8_t data;

int main(void)
{
    SYSTEM_Initialize();

    while (1)
    {
        if (UART1_IsRxReady())
        {
           ReceivedData = UART1_Read();
        }
    }
    return 1;
}

