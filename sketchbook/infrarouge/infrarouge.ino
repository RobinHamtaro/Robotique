int x;
int buzz = 12;
int inter;


void setup()
{
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  x = analogRead(2);
  Serial.println(x);
  inter = map( x , 100, 500, 300 ,15000);

tone (buzz , inter);
  
  
delay(20);  
  
        
  
  
  
  
  
  
}
