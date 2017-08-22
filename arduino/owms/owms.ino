#include "DHT.h"      // include library for DHT sensors
#define DHTPIN 8      // digital pin DHT is connected to
#define DHTTYPE DHT22     // type of DHT sensor
DHT dht(DHTPIN, DHTTYPE);     // initialize DHT sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);     // serial for debuging
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();     // read humidity
  float t = dht.readTemperature();      // read temperature as Celsius
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
    }
  float hic = dht.computeHeatIndex(t, h, false);      // compute heat index in Celsius
  Serial.println(h);
  Serial.println(t);
  Serial.println(hic);

}
