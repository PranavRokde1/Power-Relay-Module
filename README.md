
# Power Relay Module (Rev 1.0)

## 🔗 Video Link
https://www.youtube.com/  
*(Coming soon — demo and testing video will be uploaded here!)*

## 🧩 Project Introduction
This project is a **Power Relay Module (Rev 1.0)** designed to safely and efficiently switch high-power loads using logic-level control signals from microcontrollers like Arduino, ESP32, STM32, etc. It features opto-isolated input, flyback protection, and a compact PCB layout for automation and control applications.

## ⚙️ Project Function
The module enables microcontrollers to control AC or DC high-power loads indirectly via a relay. The optocoupler ensures electrical isolation between the logic circuitry and the load, protecting your controller from surges. The module supports configurable input logic levels (HIGH or LOW) and includes onboard status LED indication for easy debugging.

## 📐 Project Parameters
- **Power Supply:** 12V DC  
- **Relay Type:** SLC-12VDC-SL-C  
- **Opto-Isolator:** EL814S – for input signal isolation  
- **Driver Transistor:** BC847B NPN  
- **Protection Diode:** M7 – flyback protection across relay coil  
- **Status LED:** Indicates relay ON/OFF state  
- **Input Select Jumper:** Allows choice between HIGH or LOW logic triggering  
- **Pin Headers:** VCC, GND, Din for input; Relay terminals for output load  

## 🔍 Principle Analysis (Hardware Description)
The module design includes the following core sections:

1. **Input Signal Isolation:**  
   An EL814S optocoupler provides electrical isolation between the controller and the relay switching circuit.

2. **Relay Drive Circuit:**  
   A BC847B NPN transistor acts as a switch for the relay, triggered by the optocoupler. R1 and R2 form a current-limiting network, and a 0.1µF capacitor (C1) helps suppress voltage noise.

3. **Protection Circuit:**  
   An M7 diode across the relay coil prevents voltage spikes (flyback effect) during switching.

4. **Logic Level Selection:**  
   A jumper configuration lets users select whether the relay is triggered on a HIGH or LOW signal, improving compatibility across different microcontroller platforms.

5. **Status Indication:**  
   An onboard LED lights up when the relay is active, providing a clear visual cue.

## 💻 Software Code
This is a purely hardware-based module, but here's a simple example code snippet for Arduino:

```cpp
#define RELAY_PIN  7

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH); // or LOW, depending on jumper
  delay(1000);
  digitalWrite(RELAY_PIN, LOW); 
  delay(1000);
}
```

🔗 Full hardware design files & documentation (coming soon):  
https://github.com/oshw-lab/power-relay-module

## ⚠️ Announcements
- Ensure you're using a regulated 12V supply; avoid voltage spikes.  
- Select the correct jumper position (HIGH or LOW) based on your MCU logic output.  
- Don’t connect AC loads without proper enclosure and safety considerations.  
- Test the relay’s actual current handling with your load before deployment.

## 🛠️ Assembling Process
1. Solder all passive components (resistors, caps, diode)  
2. Add the optocoupler and transistor  
3. Solder the relay and headers  
4. Set logic jumper according to your control logic  
5. Test with a microcontroller or logic source

## 📸 Finished Product Display
*(Add an image of the fully assembled PCB here — currently placeholder is the PCB top view)*  
![Power Relay Module Top View](attached-image)
