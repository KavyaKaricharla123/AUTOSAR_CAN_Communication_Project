#include "can_if.h"
#include <stdio.h>

void App_Run(void) {
    printf("[APP] Starting application...\n");

    // Send a message
    CanIf_Transmit(0x123, "Hello AUTOSAR CAN");

    // Simulate receive
    CanIf_Receive();
}
