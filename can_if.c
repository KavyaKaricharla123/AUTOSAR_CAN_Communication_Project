#include "can_if.h"
#include "can_driver.h"
#include <stdio.h>

void CanIf_Transmit(uint32_t id, const char* data) {
    printf("[CAN IF] Routing transmit request...\n");
    CAN_SendMessage(id, data);
}

void CanIf_Receive(void) {
    printf("[CAN IF] Handling reception...\n");
    CAN_ReceiveHandler();
}
