# Print-Math-table-with-OLED-display-and-Rotary-encoder

connection goes like this

OLED To Arduino

 VCC to external 5v,
 GND to external GND,
 SCL to arduino pin A5 (or the SCL pin for your arduino),
 SDA to arduino pin A4 (or the SDA pin for your arduino).

Rotary encoder to Arduino


 VCC to external 5v,
 GND to external GND,
 Clk to A0,
 DT  to A1,
 Sw  to A2.

Add following libraries

Adafruit_GFX.h      \\https://github.com/adafruit/Adafruit-GFX-Library.git
Adafruit_SSD1306.h  \\https://github.com/adafruit/Adafruit_SSD1306.git
ClickEncoder.h      \\https://github.com/0xPIT/encoder.git
TimerOne.h          \\https://github.com/PaulStoffregen/TimerOne.git
