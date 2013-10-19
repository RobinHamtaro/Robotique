//Project created by Proux Alexandre and Beilvert Robin
//The aim of this project is to control a robot arm manually or automatically.



int button11=0;
int button12=0;
int button21=0;
int button22=0;

void setup ()
{
  pinMode (4,INPUT);
  pinMode (5,INPUT); 
  pinMode (6,INPUT);
  pinMode (7,INPUT);
  
  pinMode (0,OUTPUT);
  pinMode (1,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);

  
}

void loop ()
{
  button11=digitalRead (4);
  button12=digitalRead (5);
  button21=digitalRead (6);
  button22=digitalRead (7);
  
  ///////////////////Moteur 1///////////////////////
  if (button11==1 && button12 ==0)           
  {
   digitalWrite (0,1);
   digitalWrite (1,1);

  }
    else if (button12==1 && button11 ==0)
  {
   digitalWrite (0,1);

  }
    else
  {
   digitalWrite (0,0);
   digitalWrite (1,0);
  }
  //////////////////////////////////////////////////
  
  ///////////////////Moteur 2///////////////////////
   if (button21==1 && button22 ==0)
  {
   digitalWrite (2,1);
   digitalWrite (3,1);

  }
    else if (button22==1 && button21 ==0)
  {
   digitalWrite (2,1);

  }
    else
  {
   digitalWrite (2,0);
   digitalWrite (3,0);
  }
  //////////////////////////////////////////////////
delay(30);
  
  
    
  

  
  
}
