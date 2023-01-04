// Define pins 
int pinR = 9;
int pinG = 10;
int pinB = 11;

void setup() {
  // Define the baud rate and open the pins
Serial.begin(115200);
pinMode(pinR,OUTPUT);
pinMode(pinG,OUTPUT);
pinMode(pinB,OUTPUT);

// Waits for the usb connection to be ready
while (!Serial);
Serial.println("Input a string");

}

void loop() {

// Seperate the string into 3 values
if (Serial.available()){
int R = Serial.parseInt();
int G = Serial.parseInt();
int B = Serial.parseInt();

// Change the intensity of the different colors
analogWrite(pinR,   R);
analogWrite(pinG, G);
analogWrite(pinB,  B);
}

}

