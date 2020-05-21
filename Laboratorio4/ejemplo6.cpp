#include <iostream>

using namespace std;

//pedir numeros hasta que ese numero sea mayor que 100

int main(){

    int n;
    cout<<"ingrese la tabla a calcular: ";
    cin>>n;


    for(int i=1; i<=10; i++){
        cout<< n << "*" << i << " = "<< (n*i) <<endl;
    }
    
    return 0;
}