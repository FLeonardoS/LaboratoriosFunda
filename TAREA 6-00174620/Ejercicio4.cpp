#include <iostream>
using namespace std;
void valorA (int [], int);
void valorB (int [], int);
int suma (int [], int[], int[], int);
int main(void)
{
int i, a[100], b[100], c[100], n;

cout << endl;
cout << "SUMAR ELEMENTOS DE UN ARREGLO DE LA MISMA POSICION." << endl << endl;
cout << "Digite el tamaño de los arreglos: ";
cin >> n;

for(i=0; i < n; i++){
cout << "Introduzca los numeros de a: ";
cin >> a[i];
}
valorA(a,n);

for(i=0; i < n; i++){
cout << "Introduzca los numeros de b: ";
cin >> b[i];
}
valorB(b,n);

suma (a,b,c,n);

return 0;
}


void valorA(int a[], int n){ //funcion para los arreglos de a.
int i;
cout << "Los elementos del arreglo (a) son:" << endl;
for(i=0; i < n; i++){
cout << a[i] << " "<<endl;
}

} void valorB(int b[], int n){ //Funcion para los arreglos de b.
int i;
cout << "Los elementos del arreglo (b) son:" << endl;
for(i=0; i < n; i++){
cout << b[i] << " " << endl;
}

} int suma (int a[], int b[], int c[], int n){ //Funcion para la suma de las mismas posiciones de los arreglos.
int i;
for(i = 0; i < n; i++){
c[i]= a[i] + b[i];
cout << "La suma de los arreglos es: " << a[i] << " + " << b[i] << " = " << c[i] << endl;
}
return c[i];
}