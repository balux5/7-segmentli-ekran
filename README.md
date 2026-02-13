7-Segment Display Project

This project demonstrates how to control a 7-segment display using a microcontroller (Arduino, ESP32, etc.). The display can show numbers 0–9 and simple characters depending on your wiring and code.

Features

Display numbers 0–9

Option to display simple letters (A–F) for hexadecimal output

Easy connection with Arduino or other microcontrollers

Modular code for quick adaptation

Components

1 × 7-segment display (common cathode or common anode)

1 × Arduino / ESP32 / compatible microcontroller

8 × 220Ω resistors (for each segment)

Jumper wires

Breadboard

Wiring
7-Segment Pin	Microcontroller Pin
a	D2
b	D3
c	D4
d	D5
e	D6
f	D7
g	D8
dp (optional)	D9

Note: Adjust pins in the code according to your wiring.

Usage

Connect the 7-segment display to your microcontroller using resistors.

Upload the code (7segment.ino for Arduino) to your board.

Open Serial Monitor (if using dynamic input) or the display will automatically show numbers.

Example Code (Arduino)
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

int digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

int segPins[7] = {a,b,c,d,e,f,g};

void setup() {
  for(int i=0;i<7;i++){
    pinMode(segPins[i], OUTPUT);
  }
}

void displayDigit(int num){
  for(int i=0;i<7;i++){
    digitalWrite(segPins[i], digits[num][i]);
  }
}

void loop() {
  for(int i=0;i<10;i++){
    displayDigit(i);
    delay(1000);
  }
}

Notes

Ensure you know if your 7-segment display is common anode or common cathode.

Use current-limiting resistors to prevent damage.

You can expand this project to display multiple digits using a multiplexing technique.

License

MIT License – Free to use and modify.
