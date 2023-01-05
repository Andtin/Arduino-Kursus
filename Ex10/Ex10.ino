int pinH = 13;
int pinM = 12;
int pinL = 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
  // put your main code here, to run repeatedly:

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
int sensorReading = analogRead(A0);

float voltage = (sensorReading*5)/1024.0;


// The TMP36GZ has an 500mV offset 
float temperature = (voltage-0.5)*100;

Serial.print(temperature);
Serial.write(0xC2);
Serial.write(0xB0);
Serial.write("C");

Serial.println();

// Medium temperature is between 23 C° and 24 C°
float NDormer1 = 23;
float NDormer2 = 24;


if (temperature > NDormer2){
  digitalWrite(pinH,HIGH);
  digitalWrite(pinM,LOW);
  digitalWrite(pinL,LOW);
}

else if (temperature < NDormer1) {
  digitalWrite(pinH,LOW);
  digitalWrite(pinM,LOW);
  digitalWrite(pinL,HIGH);
}

else {
  digitalWrite(pinH,LOW);
  digitalWrite(pinM,HIGH);
  digitalWrite(pinL,LOW);
}








}
