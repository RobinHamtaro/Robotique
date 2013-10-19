/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 3;
int i=0;
int fade =1;
int capteur=0;
int photo;
int patate;
int la3=440,si3=493.8 ,do4=523,re4=587,mi4=659,fa4=698,sol4=784,la4=880,si4=987;
int c = 500;
int fad4=739,do5=1046,re5=1174;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);  
  pinMode(led, OUTPUT);     

}

// the loop routine runs over and over again forever:
void loop() {
  //analogWrite (led,0);
/*
tone(3,re4);
delay(c);
tone(3,sol4);
delay(c);
tone(3,re4);
delay(c);
tone(3,si4);
delay(c);
tone(3,re4);
delay(c);
tone(3,sol4);
delay(c);
tone(3,re4);
delay(c);
tone(3,do5);
delay(c);
tone(3,re4);
delay(c);
tone(3,fad4);
delay(c);
tone(3,re4);
delay(c);
tone(3,la4);
delay(c);
tone(3,re4);
delay(c);
tone(3,sol4);
delay(c);
tone(3,re4);
delay(c);
tone(3,re5);
delay(c);
tone(3,re4);
delay(c);
tone(3,si4);
delay(c);
tone(3,re4);*/



tone(3,mi4);
delay(c);
tone(3,mi4);
delay(c);
tone(3,re4);
delay(c);
tone(3,sol4);
delay(c);
tone(3,sol4);
delay(c);
tone(3,re4);
delay(c);
tone(3,mi4);
delay(c);
tone(3,re4);
delay(c);
tone(3,do4);
delay(c);
tone(3,do4);
delay(c);
tone(3,re4);
delay(c);
tone(3,mi4);
delay(c);
tone(3,mi4);
delay(c+500);
tone(3,re4);
delay(c);
  }
  
  
