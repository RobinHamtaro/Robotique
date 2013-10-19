#include <Servo.h> 
int sensorPin = 0;
int sensorValue =0;
int poscons;
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos=0;    // variable to store the servo position 

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ /*
  myservo.write(90);
  delay(1000);
  while (1) {
    
    poscons = map(sensorValue , 0, 1023, 0, 180); // y évolue en sens inverse de x (càd si x = 1, y=50 et inversement)
   
    if (pos < poscons) {
      myservo.write(pos+1);
      pos = pos+1;


    }
    else {
      if(pos > analogRead(sensorPin)) {
      myservo.write(pos-1);
      pos = pos-1;
      }
      delay(300);
    }
  }
    */
    
 /*   
  sensorValue = analogRead(sensorPin);
  poscons = map(sensorValue , 0, 1023, 0, 180); // y évolue en sens inverse de x (càd si x = 1, y=50 et inversement)
if ( pos =! posfinal)
   myservo.write(0);

    myservo.write(pos);
    delay(1000); 
    */
  
  
  /*for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 1023
  */

  poscons = map(analogRead(sensorPin), 700, 1000, 0, 180);

  myservo.write(poscons);
  delay(30);
   while(1)
  {
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
