#include "iostream"
using namespace std;

int main ()

{
    
float radio;
float area = 3.1416;
float perimetro = 2 * 3.1416;

cout <<"Calcula el area y perimetro de un circulo" << endl <<endl;
cout <<"Ingresa el radio del circulo:"<<endl;
cin >> radio; 
cout <<"El area del circulo es: " <<endl;
cout << area * radio * radio <<endl <<endl;
cout <<"El perimetro del circulo es: "<<endl;
cout << perimetro * radio;


return 0;



} 
