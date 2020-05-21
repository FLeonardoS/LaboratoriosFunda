#include "iostream"
using namespace std;


int main (){

int n1;
int n2;
cout << "Ingresa los numeros para verificar si son divisibles: " << endl;
cout << "Ingresa el primer numero: ";
cin >> n1;
cout << "Ingresa el segundo numero: ";
cin >> n2;

if (n1%n2==0){
    cout<< "Son divisibles.";
} else
{
    cout << "No son divisibles";
}

return 0;


}
