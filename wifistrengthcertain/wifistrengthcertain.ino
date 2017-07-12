#include "ESP8266WiFi.h"

uint8_t data[14]="ACCESS_DENIED";

long a,b,c;

void setup(){
  Serial.begin(115200);
  
}

void loop(){
  
  Serial.print("NETWORK 1:");
  Serial.println("SLTADSL");
  Serial.print("SIGNAL STRENGTH: ");
 // a = WiFi.RSSI(ssid1);
  Serial.println(WiFi.RSSI(data));

   Serial.print("NETWORK 2:");
  Serial.println("PROLINK");
  Serial.print("SIGNAL STRENGTH: ");
 // b = WiFi.RSSI(ssid2);
  Serial.println(WiFi.RSSI(ssid2));
  Serial.println("-----------------------");

  delay(1000);
}

