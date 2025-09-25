#ifndef CAN_IF_H
#define CAN_IF_H

#include <stdint.h>

void CanIf_Transmit(uint32_t id, const char* data);
void CanIf_Receive(void);

#endif
