#include <Arduino.h>

// Uncomment corresponding board
#define devkit_30pin_001
//#define devkit_36pin_001

/*
#### ESP32 DEVKIT V1.1 DIY MALL           ####
#### 30 PINS                              ####
#### DEVELOPMENT BOARD SUPPORTED PIN OUTS ####
*/
#ifdef devkit_30pin_001
/*
##############################################
*/
/*
#### ESP32 DEVKIT V1.1 DIY MALL           ####
#### 30 PINS                              ####
#### DEVELOPMENT BOARD SUPPORTED PIN OUTS ####
----------------------------------------------
Nominal | Physical  |   Description
Pin     |           |
----------------------------------------------
              2         Built-in LED
D15           3
D2            4         
D4            5
D5            8
D18           9         
D19           10        Not supported        
D21           11        
D22           14        
D23           15        
D34           19        Input only        
D35           20        Input only        
D32           21        
D33           22
D25           23
D26           24
D27           25
D14           26
D12           27
D13           28
----------------------------------------------
*/
uint8_t LED   = 2;
//uint8_t pins[] = {2,3,4,5,8,9,10,11,14,15,19,20,21,22,23,24,25,26,27,28}; // 20 pins
uint8_t pins[] = {2,32,33,25,26,27,14,12,13,15,2,4,5,18,19,21,22,23}; // 20 pins
#endif
#ifdef devkit_36pin_001
/*
##############################################
*/
/*
#### ESP32 DEVKIT V1.1 DIY MALL           ####
#### 36 PINS                              ####
#### DEVELOPMENT BOARD SUPPORTED PIN OUTS ####
----------------------------------------------
Nominal | Physical  |   Description
Pin     |           |
----------------------------------------------
              2         Built-in LED
D0            5
D15           6
D2            7         Same as built-in LED
D4            8
D5            11
D18           12        Not supported
D19           13        Not supported
D21           14        Not supported
D22           17        Not supported
D23           18        Not supported
D34           22        Not supported
D35           23        Not supported
D32           24        Not supported
D33           25
D25           26
D26           27
D27           28
D17           29
D14           30
D12           31
D13           32
----------------------------------------------
*/
#endif

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Scanning pins ...");
  // put your setup code here, to run once:  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<sizeof(pins); i++)
  {
    Serial.print("pin [");
    Serial.print(i);
    Serial.print("] : D");
    Serial.println(pins[i]);
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], HIGH);
    delay(500);
    digitalWrite(pins[i], LOW);
    delay(500);
  }

  delay(1000);
}