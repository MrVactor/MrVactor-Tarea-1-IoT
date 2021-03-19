
/*
Victor Borjas
Marzo 2021
Programa "HOLA MUNDO" del IoT (encender y apagar led)

*/


void setup()
{
pinMode (13,OUTPUT);
  
}

void loop()
{
digitalWrite (13,HIGH);
delay (300);
digitalWrite (13,LOW);  
delay (300);
}

