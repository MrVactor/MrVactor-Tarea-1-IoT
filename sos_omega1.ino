
/*
Victor Borjas
Marzo 2021
Programa para escribir SOS en codigo morse


S = ...
O = ---
S = ...

*/


//Punto es la señal mínima
//Raya debe durar como tres puntos

//Separacion sin pulso entre letras = 3 puntos
//Separacion sin pulso entre palabras = 3 rayas


int punto = 0;
int raya = 0;

void setup()
{
pinMode (13,OUTPUT);
  
}



void loop()
{

for (punto = 0; punto < 3; punto++) // Escribiendo S = ...
  
    {
    digitalWrite (13,HIGH);
    delay (300);
    digitalWrite (13,LOW);  
    delay (300);
    
    }
 delay (900);  // Tiempo de espera luego de la primera palabra (S)
  
  for (raya = 0; raya < 3; raya++) // Escribiendo O = ---
  
    {
    digitalWrite (13,HIGH);
    delay (900);
    digitalWrite (13,LOW);  
    delay (900);
    
    }
 delay (900); // Tiempo de espera luego de la segunda palabra (O)
  
  for (punto = 0; punto < 3; punto++) // Escribiendo tercera S de SOS = ...
  
    {
    digitalWrite (13,HIGH);
    delay (300);
    digitalWrite (13,LOW);  
    delay (300);
    
    }
 delay (2700); // Tiempo de espera luego de finalizada la palabra SOS
  
}







