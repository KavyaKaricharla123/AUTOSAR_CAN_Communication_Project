#ifndef CAN_DRIVER_H
#define CAN_DRIVER_H

#include <stdint.h>

void CAN_Init(void);
void CAN_SendMessage(uint32_t id, const char* data);
void CAN_ReceiveHandler(void);

#endif
