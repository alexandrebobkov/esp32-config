#include <Arduino.h>

// Uncomment corresponding board
//#define devkit_30pin_001
#define devkit_38pin_001
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
#### USB-C and USB-micro                  ####
#### DEVELOPMENT BOARD SUPPORTED PIN OUTS ####
----------------------------------------------
GPIO    | Physical  |   Description
Pin     |           |
----------------------------------------------
              2         Built-in LED
D15           3
D2            4         Built-in LED     
D4            5
D5            8
D18           9         
D19           10                
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
uint8_t pins[] = {2,4,5,12,13,14,15,18,19,21,22,23,25,26,27,32,33}; // 20 GPIO pins
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
D34           22        Input only 
D35           23        Input only 
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
uint8_t pins[] = {0,15,2,4,5,18,19,21,22,23,34,35,32,33,25,26,27,14,12,13}; // 20 GPIO pins
#endif

#ifdef devkit_38pin_001
/*
##############################################
*/
/*
#### ESP32                                ####
#### 38 PINS                              ####
#### USB-C                                ####
#### DEVELOPMENT BOARD SUPPORTED PIN OUTS ####
----------------------------------------------
GPIO    | Physical  |   Description
Pin     |           |
----------------------------------------------
              2         Built-in LED
D15           3
D2            4         Built-in LED     
D4            5
D5            8
D18           9         
D19           10                
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
uint8_t pins[] = {15,2,0,4,16,17,5,18,19,21,22,23,32,33,25,26,27,14,12,13}; // 20 GPIO pins
#endif

void setup() {
  Serial.begin(115200);
  Serial.println("Scanning pins ...");
  // put your setup code here, to run once:  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  for (int i = 0; i<sizeof(pins); i++)
  {
    Serial.print("pin [");
    Serial.print(i);
    Serial.print("] : D");
    Serial.println(pins[i]);
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], HIGH);
    delay(250);
    digitalWrite(pins[i], LOW);
    delay(250);
  }
}