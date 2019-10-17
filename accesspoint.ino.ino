#include <ESP8266WiFi.h>
void setup()
{
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(16,OUTPUT);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Setting soft-AP ... ");
  boolean result = WiFi.softAP("ESPsoftAP_01", "password");
  if(result == true)
  {
    Serial.println("Ready");
  }
  else
  {
    Serial.println("Failed!");
  }
}
void loop()
{   int t;
  Serial.printf("Stations connected = %d\n", WiFi.softAPgetStationNum());
  delay(300);
  if(WiFi.softAPgetStationNum()==1)
  {
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(5,LOW);
    delay(100);
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(5,HIGH);
    delay(1000);
    t=millis();
    Serial.print(t);
    Serial.print("\n");
    delay(1000)  ;  
    
    
    
    }
    digitalWrite(5,LOW);
    digitalWrite(16,HIGH);
}
