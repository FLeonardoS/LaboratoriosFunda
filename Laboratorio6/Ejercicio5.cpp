#include <iostream>

using namespace std;

void imprimir(int a[]);

int main(){
    int contador = 1;
    int vector[100];

    //llenamos 
    for(int i = 0; i<100; i++){
        vector[i] = contador; //1 //3  //5 //7 //9
        contador +=2;
    }

    //mostramos descendentemente
    imprimir(vector);
    return 0;
}

void imprimir(int arr[]){
    cout<<"Imprimiendo de forma descendente: "<<endl;

    for(int i = 99; i>=0; i--){
        cout<< arr[i]<<endl;
    }

}