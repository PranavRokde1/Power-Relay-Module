
# 🔌 Power Relay Module (Rev 1.0)

An open-source hardware relay module designed for switching high-power loads using logic-level signals from microcontrollers such as Arduino, ESP32, STM32, etc. This project includes full schematic and PCB files, supporting documentation, and sample code.

---

## 🎯 Project Introduction

This Power Relay Module is built to control high-voltage or high-current devices using opto-isolated logic-level input, ideal for automation, IoT, and embedded projects. It's designed with safety, compatibility, and modularity in mind.

---

## 🧠 Features

- **Opto-isolated Input (EL814S)**  
  Ensures electrical separation between control and load circuits.

- **Power Isolation**  
  Electrical isolation between logic-side and relay power, improving safety and protecting microcontrollers.

- **Relay Driver Circuit**  
  Includes BC847B transistor and M7 flyback diode for reliable relay control.

- **Logic Level Select**  
  Configurable jumper allows triggering on HIGH or LOW logic.

- **Visual Status Indicator**  
  Onboard LED indicates relay ON/OFF state.

- **Header Interfaces**  
  Includes VCC, GND, and DIN pins for easy integration.

---

## 📊 Project Parameters

| Parameter           | Value                         |
|---------------------|-------------------------------|
| Input Voltage       | 12V DC                        |
| Relay Model         | SLC-12VDC-SL-C                |
| Input Logic Levels  | Configurable (HIGH / LOW)     |
| Optocoupler         | EL814S                        |
| Driver Transistor   | BC847B NPN                    |
| Flyback Protection  | M7 Diode                      |
| PCB Dimensions      | Compact single-relay layout   |

---

## 🖥️ Applications

- Home automation
- Industrial device control
- Microcontroller load switching
- DIY smart systems
- Modular control boards

---

## 🛠️ Hardware Design

- `SCH_Power-Relay-Module_2025-05-11.json`: Schematic source  
- `PCB_PCB_Power-Relay-Module_2025-05-11.json`: PCB layout file  
- Image preview of the PCB included

Schematic and PCB created using **EasyEDA**.

---

## 💻 Sample Code (Arduino)

```cpp
#define POWER_RELAY_PIN  7  // Define the relay pin

bool Level_Select = true;  // Set to true for Active HIGH, false for Active LOW

void setup() {
  pinMode(POWER_RELAY_PIN, OUTPUT);  // Set the relay pin as output
}

void loop() {
  if (Level_Select) {
    // Active HIGH relay mode: HIGH turns the relay ON
    digitalWrite(POWER_RELAY_PIN, HIGH);  
    delay(1000);  // Wait for 1 second
  
    digitalWrite(POWER_RELAY_PIN, LOW);  // LOW turns the relay OFF
    delay(1000);  // Wait for 1 second
  } else {
    // Active LOW relay mode: LOW turns the relay ON
    digitalWrite(POWER_RELAY_PIN, LOW);  
    delay(1000);  // Wait for 1 second
  
    digitalWrite(POWER_RELAY_PIN, HIGH);  // HIGH turns the relay OFF
    delay(1000);  // Wait for 1 second
  }
}
```

---

## 📦 File Structure

```
📁 Power-Relay-Module
├── PCB_PCB_Power-Relay-Module_2025-05-11.json
├── SCH_Power-Relay-Module_2025-05-11.json
├── Power_Relay_Module_TOP.png
├── Schematic_Power-Relay-Module_2025-05-11.pdf
└── README.md
```

---

## ⚠️ Notes

- Always verify relay specs against your target load.
- Use proper insulation/enclosure when working with AC mains.
- Use a regulated 12V supply.
- Mind jumper setting (HIGH or LOW trigger).

---

## 🖼️ Preview

![Top View PCB](Power_Relay_Module_TOP.png)

---

## 🆓 License

This project is released as **Open Source Hardware** under the [CERN-OHL-W 2.0 License](https://ohwr.org/project/cernohl/wikis/home).

Feel free to fork, modify, and improve. Contributions welcome!

---

## 📹 Demo Video

Coming soon: [YouTube Demo](https://www.youtube.com/)
