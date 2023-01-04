void setup(){
Serial.begin(115200);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);

while (!Serial);

Serial.println("Input the command");

}

void loop() {

if (Serial.available()){
int state = Serial.parseInt();

if (state == 1){
digitalWrite(11, HIGH);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
}

if (state == 2){
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
}

if (state == 3){
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
}

}

}
