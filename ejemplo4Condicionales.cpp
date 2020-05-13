#include "iostream"

using namespace std;


int main (){

int x;
string respuesta;
cout << "ingrese un numero ";
cin >> x;

respuesta = (x >= 0) ? "positivo" : "Negativo";
cout << x << "Es " << respuesta;
return 0;

}