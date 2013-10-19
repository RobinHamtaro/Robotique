#include <Servo.h> 
int sensorPin0 = 0;
int sensorPin1 = 1;
int sensorPin2 = 2;
int sensorPin3 = 3;
int sensorValue =0;
int sensorPin;
int poscons;



Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos=0;    // variable to store the servo position 

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
 
 
void loop() 
{
 /* poscons = map(analogRead(sensorPin), 700, 1000, 0, 180);

  myservo.write(poscons);*/
  myservo.write(pos);
  delay(30);
  
  
  
  
   while(1)
  {
    sensorPin = comparaison(sensorPin0 , sensorPin1 , sensorPin2 ,sensorPin3);
    
    
    
    if(map(analogRead(sensorPin), 700, 1000, 0, 180)>poscons-5 && map(analogRead(sensorPin), 700, 1000, 0, 180)<poscons+5)
    {
       delay(100);
  }
  else {
    poscons = map(analogRead(sensorPin), 700, 1000, 0, 180);
  myservo.write(poscons);
  delay(30);
} 
  }
}



int comparaison (int a , int b , int c , int d )
{
  int inter;
 if ( analogRead(a)>analogRead(b) && analogRead(a)> analogRead(c) && analogRead(a)> analogRead(d) || analogRead(b)>analogRead(a) && analogRead(b)> analogRead(c) && analogRead(b)> analogRead(d) )
 {
   return inter =  map(analogRead(a), 700, 1000, 0, 180);   
 }
else 
 {
   return inter =  map(analogRead(c), 700, 1000, 180, 0);   ;
 }
  
  
}
