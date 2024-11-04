/*
  Week 3 - North/South Traffic Lights
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
}

// the loop function runs over and over again until the board is powered off
void loop()
{
  // The next three lines of code turn on the green LED North/South
  digitalWrite(green_LED_NS, HIGH); // This should turn on the GREEN LED North/South
  digitalWrite(yellow_LED_NS, LOW); // This should turn off the YELLOW LED North/South
  digitalWrite(red_LED_NS, LOW);    // This should turn off the RED LED North/South
  delay(2000);                      // wait for 2 seconds

  // The next three lines of code turn on the yellow LED North/South
  digitalWrite(green_LED_NS, LOW);   // This should turn off the GREEN LED North/South
  digitalWrite(yellow_LED_NS, HIGH); // This should turn on the YELLOW LED North/South
  digitalWrite(red_LED_NS, LOW);     // This should turn off the RED LED North/South
  delay(2000);                       // wait for 2 seconds

  // The next three lines of code turn on the red LED North/South
  digitalWrite(green_LED_NS, LOW);  // This should turn off the GREEN LED North/South
  digitalWrite(yellow_LED_NS, LOW); // This should turn off the YELLOW LED North/South
  digitalWrite(red_LED_NS, HIGH);   // This should turn on the RED LED North/South
  delay(2000);                      // wait for 2 seconds
}
