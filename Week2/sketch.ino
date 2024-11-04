/*
  ESP32 WiFi Scanning example
  Isaac Martinez
  CEIS114 - Week 2
  Nov 4, 2024
*/
#include "WiFi.h"
void setup()
{
  Serial.begin(115200);
  Serial.println("Initializing WiFi...");
  WiFi.mode(WIFI_STA);
  Serial.println("Setup done!");
}
void loop()
{
  Serial.println("Scanning...");
  // WiFi.scanNetworks will return the number of networks found
  int wifiNetworkCount = WiFi.scanNetworks();
  Serial.println("Scan done!");
  if (wifiNetworkCount == 0)
  {
    Serial.println("No networks found.");
  }
  else
  {
    Serial.println();
    Serial.print(wifiNetworkCount);
    Serial.println(" networks found");
    for (int i = 0; i < wifiNetworkCount; ++i)
    {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " " : "*");
      delay(10);
    }
  }
  Serial.println("");
  // Wait a bit before scanning again
  delay(5000);
}
