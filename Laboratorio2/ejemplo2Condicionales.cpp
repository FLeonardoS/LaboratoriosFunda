#include "iostream"
using namespace std;

int main ()
{

int n1, n2, n3, promedio;
cout << "Ingrese la nota 1: " <<endl;
cin >> n1;
cout << "Ingrese la nota 2: " <<endl;
cin >> n2;
cout << "Ingrese la nota 3: " <<endl;
cin >> n3;

promedio = (n1+n2+n3) / 3;

if (promedio >= 6){
    cout << "Materia aprobada con" <<promedio;
} else if  (promedio < 6){
     cout <<"Usted reprobo la materia con: " <<promedio;
}

return 0;



}