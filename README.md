# Bike RPM Sensor
A simple Arduino project to light a light if I stop spinning on my exercise bike when I'm working.

Uses a [5v Arduino Trinket](https://learn.adafruit.com/introducing-trinket/introduction) and an [Adafruit VL53L0X Time of Flight Distance Sensor](https://learn.adafruit.com/adafruit-vl53l0x-micro-lidar-distance-sensor-breakout)

- [ ] Create parts list
- [ ] Create wiring diagram
- [ ] Pictures
- [ ] Buy Paizo Buzzer

## Links
[Arduino Sounds](https://learn.adafruit.com/adafruit-arduino-lesson-10-making-sounds/overview)

[Adafruit VL6180X GitHub](https://github.com/adafruit/Adafruit_VL6180X)

[Fix for Wire.h issue on Arduino Trinket when using the VL52L0X library](https://forums.adafruit.com/viewtopic.php?f=52&t=132501&p=662188&hilit=VL6180X+trinket#p662188)

```In the sensor library [Check debug log for where the file is located on your PC] I removed all references (there were 3 or 4 of them) to TwoWire class and replaced them with TinyM_USI_TWI, so that it matches the class definition in the TinyWireM.h library. Apparently Trinket is still using it instead of regular Wire.h. And I did update the board definition to the latest version 1.4.12 before doing so.```