# 🔧 STM32 Bootloader Firmware Update System

## 📌 Overview

This project implements a **custom UART-based bootloader** for STM32 microcontrollers that enables in-field firmware updates. The system separates bootloader and application firmware in flash memory and ensures reliable firmware upgrade with safe execution.

---

## 🎯 Key Features

* UART-based firmware update mechanism
* Flash memory partitioning (Bootloader + Application)
* Vector Table Relocation (VTOR)
* Application validation before execution
* Fail-safe boot process
* Modular and scalable design

---

## 🧠 System Architecture

The system consists of two main components:

1. **Bootloader**

   * Runs after reset
   * Initializes communication (UART)
   * Receives and writes new firmware to flash
   * Transfers control to application

2. **Application**

   * Main user firmware
   * Located in a separate flash region
   * Executed only after validation

---

## 🗺️ Flash Memory Layout

| Section     | Address Start | Description      |
| ----------- | ------------- | ---------------- |
| Bootloader  | 0x08000000    | Bootloader code  |
| Application | 0x08004400    | User application |

---

## 🔄 Boot Flow

1. MCU Reset
2. Bootloader starts execution
3. Checks for firmware update request
4. If update requested:

   * Receives firmware via UART
   * Writes to Flash
5. Validates application
6. Jumps to application

---

## ⚙️ Technologies Used

* STM32 (STM32F4 series)
* Embedded C
* STM32CubeIDE
* STM32Cube Programmer
* STM32Cube MX
* HAL Drivers
* UART Communication

---

## 🔌 Hardware Setup

* STM32F410RB Nucleo Board
* UART Interface (via USB-to-Serial / ST-Link VCP)

---

## ▶️ How to Run

1. Flash the bootloader to STM32
2. Connect UART to PC
3. Send firmware binary via serial tool
4. Bootloader programs the application
5. MCU jumps to application

---

## 📂 Project Structure

```
Bootloader/
Drivers/
Core/
Docs/
```
```
Application/
Drivers/
Core/
Docs/
```
---

## 🧪 Future Improvements

* CRC-based firmware validation
* OTA update support
* External flash support
* Encryption for firmware

---

## 👨‍💻 Author

Sanjana

---
