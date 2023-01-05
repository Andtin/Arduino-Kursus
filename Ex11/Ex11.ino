
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
  // put your main code here, to run repeatedly:

lcd.begin();


}

void loop() {
int sensorReading = analogRead(A0);

float voltage = (sensorReading*5)/1024.0;

// The TMP36GZ has an 500mV offset 
float temperature = (voltage-0.5)*100;

float tempAvg[10];

for (int i=0;i<10;i++){
  tempAvg[i]=temperature;
}

float tempTot=0;
for (int i=0;i<10;i++)
{
  tempTot+=tempAvg[i];
}

float averageTem=tempTot/10;

lcd.backlight();
lcd.clear();
lcd.print(averageTem);
lcd.print(0xC2);
lcd.print(0xB0);
lcd.print("C");

delay(1000);


lcd.clear();

float SJohansson = 30;

if (SJohansson < temperature) {
  lcd.clear();
  lcd.print("HOT!");
  delay(3000);
}



}



