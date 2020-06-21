
#include <iostream>

using namespace std;

int buscar(int cantidad, int digito){
    //54323
    int contador = 0;
    int aux = cantidad;
    while (cantidad>0)
    {
        cantidad %=10; 

        if(cantidad == digito){

            contador+=1;

        }
        aux /= 10; 
        cantidad = aux; //mantengo mi referencia de mi cantidad
    }
    return contador;
    
}

int main(){

    int num, dig;
    cout<<"ingrese una cantidad: ";cin>>num;
    cout<<"ingrese un digito a buscar: ";cin>>dig;

    cout<<"el numero "<<dig<<" se encuentra "<<buscar(num,dig)<<" veces";

    return 0;
} 