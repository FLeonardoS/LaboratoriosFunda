#include <iostream>

using namespace std;

//sumar numeros pares hasta un numero N

int main(){
    int acum = 0;
    int n;
    cout<<"ingrese el numero: "; cin>>n;
    for(int i = 0;i<=n; i++){
        if(i % 2 == 0){
            acum += i; 
        }
    }
    cout<<"la suma de numeros pares es: "<<acum;

    
    return 0;
}