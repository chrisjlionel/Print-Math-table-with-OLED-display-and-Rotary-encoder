// This project is coded by J Lionel Christian Jeyaraj (M.tech in Advanced manufacturing)
// Browse his featured works @ https://www.instructables.com/member/chrisjlionel/instructables/
// Email chrisjlionel@live.com
// mobile +91-8807971412

#include <Adafruit_GFX.h> //for this must add lib file download from Adfruit
#include <Adafruit_SSD1306.h> //for this must add lib file download from adfruit
#include <ClickEncoder.h>
#include <TimerOne.h>

int y = 0;

ClickEncoder *encoder;
int16_t last, value;

void timerIsr() {
  encoder->service();
}

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup() {
  Serial.begin (9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //initialize with the I2C addr 0x3C (128x64)
  display.clearDisplay();
  
  encoder = new ClickEncoder(A1, A0, A2);
  encoder->setAccelerationEnabled(false);

  Timer1.initialize(1000);
  Timer1.attachInterrupt(timerIsr); 
  last = -1;
}

void loop() {

  value += encoder->getValue();
  ClickEncoder::Button b = encoder->getButton();
  
    
  if (b == ClickEncoder::Clicked) {
    y=y+1; 
  }
  
  if (b == ClickEncoder::Released) {
    y=0; 
  }

  if (b == ClickEncoder::DoubleClicked) {
    y=y+10; 
  }
  
  int x=value*y;
  
  Serial.print(x);
  Serial.print("=");
  Serial.print(value);
  Serial.print("x");
  Serial.print(y);
  Serial.println();
  
  display.clearDisplay();
  
  display.setCursor(0,1);  //OLED Display
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.print(x);
  display.print("=");
  display.print(value);
  display.print("x");
  display.print(y);
  display.println();
  display.setTextSize(1);
  display.setCursor(0,19);
  display.print("CHRISJLIONEL # GITHUB");
  display.display();
  delay(500);
  display.clearDisplay();
}
