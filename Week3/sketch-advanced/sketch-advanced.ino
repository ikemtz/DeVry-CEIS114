/*
  Week 3 - [Advanced] North/South Traffic Lights
  Isaac Martinez
  CEIS 114 - Week 3
  Nov 11, 2024
*/

const int green_LED_NS = 13;  // The green LED North/South is wired to ESP32 board pin GPIO13
const int yellow_LED_NS = 12; // The yellow LED North/South is wired to ESP32 board pin GPIO12
const int red_LED_NS = 14;    // The red LED North/South is wired to ESP32 board pin GPIO14

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(green_LED_NS, OUTPUT);  // initialize digital pin GPIO13 (green LED North/South) as an output.
  pinMode(yellow_LED_NS, OUTPUT); // initialize digital pin GPIO12 (yellow LED North/South) as an output.
  pinMode(red_LED_NS, OUTPUT);    // initialize digital pin GPIO14 (Red LED North/South) as an output.

  Serial.begin(115200); // set baud rate of serial monitor to 115200 bits per second
}

// the loop function runs over and over again until the board is powered off
void loop()
{
  Serial.println("The green light is now on for 4 seconds.");
  switchLights(HIGH, LOW, LOW, 4000);

  Serial.println("The yellow light is now on for 2 seconds.");
  switchLights(LOW, HIGH, LOW, 2000);

  Serial.println("The red light is now on for 4 seconds.");
  switchLights(LOW, LOW, HIGH, 4000);
}

void switchLights(int isGreenLedNsOn, int isYellowLedNsOn, int isRedLedNsOn, int delayTimeMS)
{
  digitalWrite(green_LED_NS, isGreenLedNsOn);   // This will switch the GREEN LED North/South
  digitalWrite(yellow_LED_NS, isYellowLedNsOn); // This will switch the YELLOW LED North/South
  digitalWrite(red_LED_NS, isRedLedNsOn);       // This will switch the RED LED North/South
  delay(delayTimeMS);                           // wait for delayTime in milliseconds
}