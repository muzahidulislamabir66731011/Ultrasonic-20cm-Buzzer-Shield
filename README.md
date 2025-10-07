# 🦇 Ultrasonic-20cm-Buzzer-Shield

![](https://img.shields.io/badge/ESP32-DevKit-C00E4?style=flat-square&logo=espressif&logoColor=white)
![](https://img.shields.io/badge/Code-25_Lines-00ff00?style=flat-square)
![](https://img.shields.io/badge/License-MIT-97CA00?style=flat-square&logo=opensourceinitiative)


![](https://img.shields.io/badge/Arduino-IDE-blue?style=for-the-badge&logo=arduino)
![](https://img.shields.io/badge/ESP32-Compatible-ff0000?style=for-the-badge&logo=espressif)
![](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![](https://img.shields.io/badge/Code-20_Lines-00ff00?style=for-the-badge)


## ⚡ Logic in one breath
```
distance < 20 cm → buzzer ON  
distance ≥ 20 cm → buzzer OFF  
```
Serial keeps you posted every 200 ms.

## 🔌 30-Second Wiring
| HC-SR04 | ESP32 Pin | Wire colour hint |
|---------|-----------|------------------|
| Vcc     | 5 V       | red              |
| GND     | GND       | black            |
| Trig    | GPIO 5    | yellow           |
| Echo    | GPIO 18   | green            |
| Buzzer +| GPIO            |

## 🚀 Flash & Forget
1. Clone repo
2. Open `distancealert.ino.ino`
3. Upload → open Serial Monitor (115 200 baud) → move hand closer than 20 cm → **beep!**

## 🎛️ Tweak Table
| Desire | Change |
|--------|--------|
| Threshold 10 cm | `distance < 20` → `distance < 10` |
| Slower sampling | `delay(200);` → `delay(500);` |
| LED instead of buzzer | swap `BUZZER_PIN` for any LED pin |


## 📜 License
MIT – sense, beep, repeat—no strings attached.
