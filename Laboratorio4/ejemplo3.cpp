#include <iostream>

using namespace std;

//pedir numeros hasta que ese numero sea mayor que 100

int main(){

    int numero;

    do{
        cout<<"ingrese un numero";
        cin>>numero;
    }while(numero<=100);


    return 0;
}