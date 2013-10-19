//Project created by Proux Alexandre and Beilvert Robin
//The aim of this project is to control a robot arm manually or automatically.





int button11=0; // axe z1
int button12=0;

int button21=0; // axe y1
int button22=0;

int button31=0;// axe y2
int button32=0;

int button41=0;// axe z2
int button42=0;

int button51=0;// axe y3
int button52=0;

int capteur1,capteur2,capteur3,capteur4,capteur5; // 5 capteurs

void setup ()
{
  pinMode (2,OUTPUT);  // 
  pinMode (3, OUTPUT); // 
 
 
  pinMode (4,INPUT);
  pinMode (5, INPUT);
 
 
  pinMode (6,OUTPUT);
  pinMode (7, OUTPUT);
 
 
  pinMode (4,INPUT);
  pinMode (5, INPUT);
 
 
}

void loop ()
{
  

  button1=digitalRead (4);
  button2=digitalRead (5);
  
  
  
  
  
  ////////////////////////////////initialisation des capteurs ////////////////////
 capteur0= analogRead(0);
 capteur1= analogRead(1);  
 capteur2= analogRead(2);  
 capteur3= analogRead(3);
 capteur4= analogRead(4);
  
  
 ///////////////////////////////////Début de la sequence ////////////////////// 
  
  
  
 
  if (button1==1 && button2 ==0) //fait tourner à gauche sur l'axe z1
  {
   digitalWrite (2,1);
   digitalWrite (3,1);

  }
    else if (button2==1 && button1 ==0) //fait tourner à droite sur l'axe z1
  {
   digitalWrite (2,1);

  }
    else // il ne se passe rien
  {
   digitalWrite (2,0);
   digitalWrite (3,0);

  }
delay(30);
 
 
   
 

 
 
}

