#include <Servo.h> 
int sensorPin0 = 0;
int sensorPin1 = 1;
int sensorPin2 = 2;
int sensorPin3 = 3;
int sensorPin4 = 4;
int time;
int hacheurPin = 7;
int motorPin = 8;




Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created
int pos=90;    // variable to store the servo position 

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  pinMode(motorPin,OUTPUT);
  pinMode(hacheurPin, OUTPUT);

  
} 
 
 
 
void loop() 
{
  
  myservo.write(pos);

  delay(30);
  time = 400;
  
  
  while(1)
  {
     
    
    
    
  if((analogRead(sensorPin0)>analogRead(sensorPin1)) && (analogRead(sensorPin0)>analogRead(sensorPin2)) && (analogRead(sensorPin0)>analogRead(sensorPin3)) && (analogRead(sensorPin0)>analogRead(sensorPin4)))
    {
       myservo.write(170);
       digitalWrite(hacheurPin,HIGH); 
       digitalWrite(motorPin,HIGH);
    }
  if((analogRead(sensorPin1)>analogRead(sensorPin0)) && (analogRead(sensorPin1)>analogRead(sensorPin2)) && (analogRead(sensorPin1)>analogRead(sensorPin3)) && (analogRead(sensorPin1)>analogRead(sensorPin4)) )
    {
       myservo.write(80);
       digitalWrite(hacheurPin,HIGH); 
       digitalWrite(motorPin,HIGH);
    }
  if((analogRead(sensorPin2)>analogRead(sensorPin0)) && (analogRead(sensorPin2)>analogRead(sensorPin1)) && (analogRead(sensorPin2)>analogRead(sensorPin3)) && (analogRead(sensorPin2)>analogRead(sensorPin4)) )
    {
       myservo.write(10);
       digitalWrite(hacheurPin,HIGH); 
       digitalWrite(motorPin,HIGH);
    }
  if((analogRead(sensorPin3)>analogRead(sensorPin0)) && (analogRead(sensorPin3)>analogRead(sensorPin1)) && (analogRead(sensorPin3)>analogRead(sensorPin2)) && (analogRead(sensorPin3)>analogRead(sensorPin4)))
    {
       myservo.write(90);
       digitalWrite(hacheurPin,HIGH); 
       digitalWrite(motorPin,LOW);
    }
  if((analogRead(sensorPin4)>analogRead(sensorPin0)) && (analogRead(sensorPin4)>analogRead(sensorPin1)) && (analogRead(sensorPin4)>analogRead(sensorPin2)) && (analogRead(sensorPin4)>analogRead(sensorPin3)))
    {
      myservo.write(90);
      digitalWrite(hacheurPin,LOW);
delay(60);
      
    }
  
  if((analogRead(sensorPin3)>analogRead(sensorPin4)) && (analogRead(sensorPin3)>analogRead(sensorPin1)) && (analogRead(sensorPin3)>analogRead(sensorPin0)) && (analogRead(sensorPin3)>analogRead(sensorPin2)))
    {
       myservo.write(90);
       digitalWrite(motorPin,LOW);
       digitalWrite(hacheurPin,HIGH); 
    }
   
  
    delay(10);
    time=time-1;
} 
  }





