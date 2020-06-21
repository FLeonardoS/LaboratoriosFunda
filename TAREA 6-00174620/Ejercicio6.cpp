#include <iostream>
using namespace std;

int main(){
int n, i,contador = 0, a[100], n2;
cout << endl;
cout <<"PROGRAMA PARA CONTAR CUANTAS VECES SE REPITE UN NUMERO." <<endl;
cout << "Ingresa un numero para el tamaño del arreglo" << endl;
cin >> n;

for(i=0; i < n; i++){ //Cantidad de numeros en el arreglo.
cout << "Introduzca los numeros del arreglo: ";
cin >> a[i];
}

cout << "Ingresa el numero que quieres saber cuantas veces se repite." << endl;
cin >> n2;
for (i=0; i <= n; i++){ //Contador de la cifra que se escogio.
    if (a[i]==n2){
        contador++;
    }
}
        cout << "La cifra " << n2 << " se repite " << contador << " veces." << endl;

return 0;
}    






