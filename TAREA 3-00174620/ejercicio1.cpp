#include "iostream"
using namespace std;

int  main ()
{

float n1;
float n2;
float n3;

cout <<"Ingresa el primer numero entero" << endl;
cin >> n1;
cout <<"Ingresa el segundo numero entero" << endl;
cin >> n2;
cout <<"Ingresa el tercer numero entero" << endl;
cin >> n3;
float resultado = n1 + n2 + n3; 
float promedio = resultado / 3;
cout <<"El resultado es: "; 
cout << promedio;


    return 0;
    

}