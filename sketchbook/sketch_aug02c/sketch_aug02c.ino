#include <Servo.h>

Servo myservo;  // crèe un objet Servo pour contrôler un servo-moteur
                // 8 objets servo peuvent être créés au maximum
const int buttonPin = 2;     // the number of the pushbutton pin
int pos = 0;    // cette variable enregistre la position du servo
int buttonState = 0;
void setup()
{
  pinMode(buttonPin, INPUT);     
  myservo.attach(9);  // affecte à l'objet Servo la broche 9 de Arduino
}

void loop()
{
  myservo.write(0);
  while (1) {
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH && pos <=160) { 
 pos = pos+10;
     myservo.write(pos);              // pilote le servo pour aller à la position 'pos'
    delay(100); 
 }
  else
{
    myservo.write(20);
}
  
}
}
