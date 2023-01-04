void binarycounter(){

digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(1000);
}

void setup() {
Serial.begin(115200);

pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);


}

void loop() {

binarycounter();


}
