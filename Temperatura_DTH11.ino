#include<DHT.h>
//#include<DHT_U.h>

int SENSOR = 2;


DHT dht (SENSOR,DHT11);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  //int tf = dth.readTemperature(true);


  Serial.print(t);
  Serial.print("x");
  Serial.println(h-10);
  //delay(1000);
  delay(1000);
  
}
