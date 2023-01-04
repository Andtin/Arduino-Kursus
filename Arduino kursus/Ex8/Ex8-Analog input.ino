

int pinR = 9;
int pinG = 10;
int pinB = 11;

void setup() {
Serial.begin(115200);

  // Define the baud rate and open the pins
Serial.begin(115200);
pinMode(pinR,OUTPUT);
pinMode(pinG,OUTPUT);
pinMode(pinB,OUTPUT);

// Waits for the usb connection to be ready
while (!Serial);
}

void colour (byte r,byte g,byte b) {
  digitalWrite(pinR,r);
  digitalWrite(pinG,g);
  digitalWrite(pinB,b);
}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);
  // map the sensor range to a range of four options:
  int range = map(sensorReading, 0, 1023, 0, 3);

  switch (range) {
    case 0:  // purple
      colour(HIGH,LOW,HIGH);
      break;
    case 1:  // blue
      colour(LOW,LOW,HIGH);
      break;
    case 2:  // yellow
      colour(HIGH,HIGH,LOW);
      break;
    case 3:  // red
      colour(HIGH,LOW,LOW);
      break;
  }
  delay(1);  // delay in between reads for stability
}



