
/*Кодът е използван за разучаване работата на wi-fi модула ESP8266
 * и дали юе може част от този код да се използва от нашия проект.
 * 
 */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
char auth[] = "f67io9ofNlIxrlMMl4mtBu1_jr0aSPJs";


char ssid[] = "MERCUSYS";
char pass[] = "pass";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
