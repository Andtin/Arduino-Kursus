// Defining pins
int LEDA=9;
int LEDB=10;
int LEDC=11;
int LEDD=12;
int LEDE=13;


void setup(){
Serial.begin(115200);
pinMode(LEDE,OUTPUT);
pinMode(LEDD,OUTPUT);
pinMode(LEDC,OUTPUT);
pinMode(LEDB,OUTPUT);
pinMode(LEDA,OUTPUT);

// Holds serial monitor open while running
while (!Serial);

Serial.println("Input a letter");

}

void loop() {

// Input character
if (Serial.available()){
  char state = Serial.read();

// If serial monitor inputs a then LEDA lights up. 
if (state == 'a'){
digitalWrite(LEDA, HIGH);
digitalWrite(LEDB, LOW);
digitalWrite(LEDC, LOW);
digitalWrite(LEDD, LOW);
digitalWrite(LEDE, LOW);
}
// If serial monitor inputs b then LEDB lights up. 
else if (state == 'b'){
digitalWrite(LEDA, LOW);
digitalWrite(LEDB, HIGH);
digitalWrite(LEDC, LOW);
digitalWrite(LEDD, LOW);
digitalWrite(LEDE, LOW);
}

// If serial monitor inputs c then LEDC lights up. 
else if (state == 'c'){
digitalWrite(LEDA, LOW);
digitalWrite(LEDB, LOW);
digitalWrite(LEDC, HIGH);
digitalWrite(LEDD, LOW);
digitalWrite(LEDE, LOW);
}

// If serial monitor inputs d then LEDD lights up. 
else if (state == 'd'){
digitalWrite(LEDA, LOW);
digitalWrite(LEDB, LOW);
digitalWrite(LEDC, LOW);
digitalWrite(LEDD, HIGH);
digitalWrite(LEDE, LOW);
}

// If serial monitor inputs e then LEDE lights up. 
else if (state == 'e'){
digitalWrite(LEDA, LOW);
digitalWrite(LEDB, LOW);
digitalWrite(LEDC, LOW);
digitalWrite(LEDD, LOW);
digitalWrite(LEDE, HIGH);
}

// If other characters are pressed, all lights turn off
else {
digitalWrite(LEDA, LOW);
digitalWrite(LEDB, LOW);
digitalWrite(LEDC, LOW);
digitalWrite(LEDD, LOW);
digitalWrite(LEDE, LOW);
}

}

}