void setup() {
pinMode(12,INPUT_PULLUP);
pinMode(13,OUTPUT);

}
void loop() {
if(digitalRead(12) == false){
digitalWrite(13,HIGH);
}

else {
    digitalWrite(13, LOW);
}
}
