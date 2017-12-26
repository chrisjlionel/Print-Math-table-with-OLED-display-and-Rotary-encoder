# Print-Math-table-with-OLED-display-and-Rotary-encoder

connection goes like this

OLED To Arduino

 1. VCC to external 5v,
 2. GND to external GND,
 3. SCL to arduino pin A5 (or the SCL pin for your arduino),
 4. SDA to arduino pin A4 (or the SDA pin for your arduino).

Rotary encoder to Arduino


 1. VCC to external 5v,
 2. GND to external GND,
 3. Clk to A0,
 4. DT  to A1,
 5. Sw  to A2.

Add following libraries

Adafruit_GFX.h      \\https://github.com/adafruit/Adafruit-GFX-Library.git

Adafruit_SSD1306.h  \\https://github.com/adafruit/Adafruit_SSD1306.git

ClickEncoder.h      \\https://github.com/0xPIT/encoder.git

TimerOne.h          \\https://github.com/PaulStoffregen/TimerOne.git
