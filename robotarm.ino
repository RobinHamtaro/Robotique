

int button1=0;
int button2=0;



void setup ()
{
  pinMode (2,OUTPUT);
  pinMode (3, OUTPUT);
 
  pinMode (4,INPUT);
  pinMode (5, INPUT);
 
 
}

void loop ()
{
  button1=0;
  button1=digitalRead (4);
  button2=digitalRead (5);
 
  if (button1==1 && button2 ==0)
  {
   digitalWrite (2,1);
   digitalWrite (3,1);

  }
    else if (button2==1 && button1 ==0)
  {
   digitalWrite (2,1);

  }
    else
  {
   digitalWrite (2,0);
   digitalWrite (3,0);

  }
delay(30);
 
 
   
 

 
 
}

