#include <Servo.h>

Servo myservo;  // crèe un objet Servo pour contrôler un servo-moteur
                // 8 objets servo peuvent être créés au maximum

int pos = 0;    // cette variable enregistre la position du servo

void setup()
{
  myservo.attach(9);  // affecte à l'objet Servo la broche 9 de Arduino
}

void loop()
{
  for(pos = 0; pos < 180; pos += 5)  // boucle qui va de 0 à 180 degrés par pas de 1 degré                           
  {                                 
    myservo.write(pos);              // pilote le servo pour aller à la position 'pos'
    delay(15);                       // attend 15 ms que le servo atteigne sa nouvelle position
  }
  for(pos = 180; pos>=1; pos-=5)     // boucle qui va de 180° à 0 dégré
  {                                
    myservo.write(pos);              // pilote le servo pour aller à la position 'pos'
    delay(15);                       // attend 15 ms que le servo atteigne sa nouvelle position
  }
} 
