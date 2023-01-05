void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
  // put your main code here, to run repeatedly:


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

delay(100);

}
