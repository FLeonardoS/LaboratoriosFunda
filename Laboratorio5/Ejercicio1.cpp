#include <iostream>

using namespace std;

int main(){

    int unidades, decenas, centenas, millares, numero;

    cout<<"ingrese un numero: ";
    cin>>numero;

    unidades = numero/1;
    decenas = numero/10;
    centenas = numero/100;
    millares = numero/1000;

    cout<<"el numero: "<<numero<<" tiene "<<unidades<<" unidades "<<decenas<<" decenas "<<centenas<<" centenas "<<millares<<" millares ";

    return 0;
}
