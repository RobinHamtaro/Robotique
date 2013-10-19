byte pins[8] ={12,11,10,9,8,7,6,5};
byte chiffres[10] = { 
// ABCDEF
   B1111110,
   B0110000, // 1 
   B0000001, // 2 TODO 
   B0000001, // 3 TODO 
   B0000001, // 4 TODO 
   B0000001, // 5 TODO 
   B0000001, // 6 TODO 
   B0000001, // 7 TODO 
   B0000001, // 8 TODO 
   B0000001 // 9 TODO
   
};
void show(byte c ) {
  // 
}

void setup() {
  for(int i=0; i<7 ; i++)
     pinMode(pins[i],OUTPUT);
     //on affiche un 4 segment pendant une seconde
     show(chiffres[4]);
     delay(1000);
     // on eteint 
     show(0);
}

void loop() {
}
