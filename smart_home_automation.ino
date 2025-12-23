// Smart Home Automation System
// Bulb control using PIR sensor
// Fan control using temperature sensor

#include <DHT.h>

#define DHTPIN 4         
#define DHTTYPE DHT11

#define PIRPIN 2          
#define RELAY_FAN 3      
#define RELAY_BULB 5      
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(PIRPIN, INPUT);
  pinMode(RELAY_FAN, OUTPUT);
  pinMode(RELAY_BULB, OUTPUT);

  digitalWrite(RELAY_FAN, LOW);   
  digitalWrite(RELAY_BULB, LOW);  
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature(); 
  int motion = digitalRead(PIRPIN);         

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" °C | Motion: ");
  Serial.println(motion);

 
  if (motion == HIGH) {
    digitalWrite(RELAY_BULB, HIGH);  
    Serial.println("Bulb ON");
  } else {
    digitalWrite(RELAY_BULB, LOW);   
    Serial.println("Bulb OFF");
  }


  if (temperature > 28 && motion == HIGH) {
    digitalWrite(RELAY_FAN, HIGH);    
    Serial.println("Fan ON");
  } else {
    digitalWrite(RELAY_FAN, LOW);    
    Serial.println("Fan OFF");
  }

  delay(500);
}
