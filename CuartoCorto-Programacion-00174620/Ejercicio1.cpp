#include "iostream"
using namespace std;

void murci(char palabra [2000]); //Funcion para realizar la encriptacion de la frase o palabra.

int main () {

char frase[2000]; //Arreglo para almacenar la frase o palabra
cout << endl;
cout << "ENCRIPTA EL TEXTO O FRASE QUE DESEE (CLAVE MURCIELAGO)" << endl;
cout<<"Ingresa el texto que quieres encripta:"<<endl;
gets(frase); //Escribir palabra o frase.

murci (frase); //Llamado de la funcion.

return 0;
 
}

void murci(char frase [2000]){ //Funcion para encriptar.
for (int i=0; i<=2000; i++) {
 
switch (frase[i]) {
{
case 'm':
frase[i]='0';
break;

case 'u':
frase[i]='1';
break;

case 'r':
frase[i]='2';
break;

case 'c':
frase[i]='3';
break;

case 'i':
frase[i]='4';
break;

case 'e':
frase[i]='5';
break;

case 'l':
frase[i]='6';
break;

case 'a':
frase[i]='7';
break;

case 'g':
frase[i]='8';
break;
case 'o':
frase[i]='9';
break;

default:
frase[i]=frase[i];
 
}
}
}
cout<<"La palabra encriptada es: "<<frase; //Palabra encriptada haciendo uso del Switch
}