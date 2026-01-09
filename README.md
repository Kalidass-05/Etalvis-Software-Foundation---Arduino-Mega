# Etalvis-Software-Foundation---Arduino-Mega

📌 Overview

This repository contains course notes, explanations, and bare-metal code implementations created while learning the Embedded Software Foundation – GPIO course by Etalvis.

The course focuses on low-level (bare-metal) programming using the Arduino Mega (ATmega2560) without relying on high-level Arduino functions, to build a strong foundation in embedded systems.

🎯 Course Objectives

Understand GPIO hardware architecture

Learn register-level programming

Control I/O pins using bare-metal C

Build a strong foundation for firmware development

🧠 Topics Covered

Introduction to Embedded Systems

Arduino Mega (ATmega2560) Architecture

GPIO Registers:

DDRx (Data Direction Register)

PORTx (Output Register)

PINx (Input Register)

Input vs Output configuration

Pull-up resistors

Bitwise operations

LED interfacing

Switch/Button interfacing

Delay using software loops

Bare-metal vs Arduino framework comparison

🛠️ Hardware Used

Arduino Mega 2560

LEDs

Push Buttons / Switches

Resistors

Breadboard

Jumper wires

💻 Software & Tools

Arduino IDE

Embedded C

AVR Register Programming

Datasheet: ATmega2560

⚙️ Programming Approach

Bare-metal programming

Direct access to hardware registers

No use of functions like:

digitalWrite()

digitalRead()

pinMode()

Example:

DDRB |= (1 << PB7);   // Configure PB7 as output
PORTB |= (1 << PB7); // Set PB7 HIGH

🧪 Learning Outcomes

Strong understanding of GPIO internals

Ability to read and use microcontroller datasheets

Confidence in low-level embedded programming

Foundation for advanced topics like:

Timers

Interrupts

Communication protocols (UART, SPI, I2C)

🚀 Future Scope

Extend GPIO concepts to:

Timers

Interrupts

Peripheral drivers

Port bare-metal concepts to:

STM32

ESP32

📚 References

ATmega2560 Datasheet

Etalvis Embedded Software Foundation Course

AVR Instruction Set Manual

👨‍💻 Author

Kalidass
Electronics & Communication Engineering
Embedded Systems & Firmware Enthusiast

📜 Disclaimer

This repository is created only for learning and educational purposes as part of the Embedded Software Foundation course.
