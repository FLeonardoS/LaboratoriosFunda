#include "iostream"
#include "math.h"
using namespace std;

int main ()
{

    float a;
    float b;
    float c;
    float resultado;
    float resultado2;

cout <<"Ingresa los valores de a, b y c para obtener resultados basandonos en la formula general:" << endl <<endl;
cout <<"Ingresa el valor de a:" << endl;
cin >> a;
cout <<"Ingresa el valor de b:" << endl;
cin >> b;
cout <<"Ingresa el valor de c:" << endl;
cin >> c;
resultado = (-b + (sqrt(b*b-4*a*c)))/(2*a);
resultado2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);
cout << "El primer resultado es:" <<endl;
cout << resultado <<endl;
cout << "El segundo resultado es:" <<endl;
cout << resultado2;


return 0;

}