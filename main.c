#include "can_driver.h"

// Forward declaration
void App_Run(void);

int main(void) {
    CAN_Init();
    App_Run();
    return 0;
}
