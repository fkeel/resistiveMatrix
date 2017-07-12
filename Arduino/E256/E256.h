// #ifndef __E256_H__
// #define __E256_H__

#define  BAUD_RATE            230400
#define  COLS                 16
#define  ROWS                 16
#define  NEW_COLS             64
#define  NEW_ROWS             64
#define  FRAME_DATAS          256
#define  CALIBRATION_CYCLES   4

#define MIN_BLOB_PIX          2 // Only blobs that with more pixels than 2

// Control pins to send values to the 8-BITs shift registers used on the E-256 PCB
// shiftOut using SPI library : https://forum.arduino.cc/index.php?topic=52383.0
// Arduino UNO - SPI PINS
// DATA_PIN -> SPI:MOSI -> D11 // Pin connected to Data in (DS) of the firdt 74HC595 8-BIT shift register
// CLOCK_PIN -> SPI:SCK -> D13 // Pin connected to clock pin (SH_CP) of the first 74HC595 8-BIT shift register
// LATCH_PIN -> SPI:SS -> D10  // Pin connected to latch pin (ST_CP) of the first 74HC595 8-BIT shift register

#define A0_PIN        A0  // The output of multiplexerA (SIG pin) is connected to Arduino Analog pin 0
#define A1_PIN        A1  // The output of multiplexerB (SIG pin) is connected to Arduino Analog pin 1

void onPacket(const uint8_t* buffer, size_t size);
void calibrate(uint8_t* id, int val, int frame);
