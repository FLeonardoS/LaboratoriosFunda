#include <iostream>

using namespace std;

float promedio(int a[], int n);

int main (){

    int n;
    cout<<"ingrese el tamnio del arreglo: "; cin>>n;
    int vector[n];

    //llenamos el array
    for(int i=0; i<n; i++){
        cout<<"ingrese el dato: ";cin>> vector[i];
    }

    cout<<"su promedio de notas es: " << promedio(vector,n);

    return 0;
}

float promedio(int array[], int n){
    float suma=0, promedio;

    for(int i =0; i<n; i++){
        suma += array[i]; //1 //4 //10
    }
    promedio = suma/n;
    return promedio;
}