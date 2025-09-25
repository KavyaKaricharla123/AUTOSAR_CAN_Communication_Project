#include "can_driver.h"
#include <stdio.h>

void CAN_Init(void) {
    printf("[CAN DRIVER] Initialized\n");
}

void CAN_SendMessage(uint32_t id, const char* data) {
    printf("[CAN DRIVER] Sending ID: 0x%03X Data: %s\n", id, data);
}

void CAN_ReceiveHandler(void) {
    // Simulated reception
    printf("[CAN DRIVER] Received ID: 0x321 Data: World\n");
}
