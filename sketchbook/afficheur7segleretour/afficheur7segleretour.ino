/* On assigne chaque LED à une broche de l'arduino */
const int A = 6;
const int B = 7;
const int C = 8;
const int D = 9;
const int E = 10;
const int F = 11;
const int G = 12;
//notez que l'on ne gère pas l'affichage du point, mais vous pouvez le rajouter si cela vous chante ^^
 
void setup()
{
   //définition des broches en sortie
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
 
   //mise à l'état HAUT de ces sorties pour éteindre les LED de l'afficheur
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
}
 
void loop()
{
   //affichage du chiffre 5, d'après le tableau précédent
   digitalWrite(A,LOW);
   digitalWrite(B, HIGH);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, HIGH);
   digitalWrite(F, LOW);
   digitalWrite(G, LOW);
}
