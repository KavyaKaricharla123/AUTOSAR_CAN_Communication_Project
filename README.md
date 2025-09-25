# AUTOSAR CAN Communication Project (Minimal Example)

This is a **minimal AUTOSAR-inspired CAN Communication demo** written in C.
It mimics the AUTOSAR layering:
- **CAN Driver (MCAL)**
- **CAN Interface (CanIf)**
- **Application Layer**

## Build & Run
```bash
make
./can_demo
```

## Example Output
```
[CAN DRIVER] Initialized
[APP] Starting application...
[CAN IF] Routing transmit request...
[CAN DRIVER] Sending ID: 0x123 Data: Hello AUTOSAR CAN
[CAN IF] Handling reception...
[CAN DRIVER] Received ID: 0x321 Data: World
```
