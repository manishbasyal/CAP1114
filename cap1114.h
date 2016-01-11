  /***************************************************
  This is a library for the CAP1114 14-Channel Capacitive Sensor
  These sensors use I2C/SPI to communicate, 2+ pins are required to
  interface.
  Developed by Audoce Mechatronics 2016
  ****************************************************/
  #ifndef CAP1114_H
  #define CAP1114_H
  //Headers for Arduino
  //#include <Wire.h>
  //#include <SPI.h>
  //Headers for Nordic
  #include <stdbool.h>
  #include <stdint.h>
  //CAP1114 default I2C address
  #define CAP1114_I2CADDR 0x28
  #define CAP1114_MAIN 0x00 //(R/W) Default will activate and have INT bit to "No interrupt pending"
  #define CAP1114_BTN_STAT1 0x03
  #define CAP1114_BTN_STAT2 0x04 
  #define CAP1114_DATA_SEN 0x1F
  #define CAP1114_SENSO_EN 0x21
  #define CAP1114_INT_EN1 0x27
  #define CAP1114_INT_EN2 0x28
  #define CAP1114_MPRESS_CONFG 0x2A
  #define CAP1114_LED_CONT 0x73 //
  #define CAP1114_LEDGPIO_DIR 0x70 //Direction of LED/GPIO pins
  #define CAP1114_PROD_ID 0xFD //Product ID
  #define CAP1114_MANUFID 0xFE //Manufacture ID

  bool CAP1114_INIT(void);
  
  bool CAP1114_NUM_READ(uint8_t * data);
  
  #endif
