#include <LiquidCrystal.h>
//LiquidCrystal lcd(3, 2, 4, 5, 6, 7);

#define sensor 18
#define start 10

int delay1()
{
  //unsigned int long k;
    int i,j;
    unsigned int count=0;
    for(i=0;i<1000;i++) 
    {
      for(j=0;j<1227;j++)
      {
       if(digitalRead(sensor))
       {
         count++;
      //   Serial.print(count);
        while(digitalRead(sensor));
       
       }}}
  
    return count;
}

void setup() 
{
  pinMode(sensor, INPUT);
  pinMode(start, INPUT);
  pinMode(13, OUTPUT);
 // lcd.begin(16, 2);
 // lcd.print("Techometer");
 // lcd.setCursor(0,1);

 Serial.begin(9600);
 Serial.println("TECHOMETER");
  delay(2000);
  digitalWrite(start, HIGH);
}

void loop() 
{
     unsigned int time=0,RPM=0;
     Serial.println("Please press button to start");
//     lcd.clear();
//     lcd.print("  Please Press  ");
//     lcd.setCursor(0,1);
//     lcd.print("Button to Start ");
     while(digitalRead(start));
     Serial.println("Reading RPM.....");
//     lcd.clear();
//     lcd.print("Reading RPM.....");
     time=delay1();
     Serial.println("Please Wait.....");
//     lcd.clear();
//     lcd.print("Please Wait.....");
     RPM=(time*12)/3;
     delay(2000);
     Serial.print("RPM = ");
     Serial.println(RPM);
//     lcd.clear();
//     lcd.print("RPM=");
//     lcd.print(RPM);
Serial.println("***************************************************************");
     delay(5000);
}
