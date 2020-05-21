#include <iostream>

using namespace std;

//pedir numeros hasta que ese numero sea mayor que 100

int main(){

    long long factorial=1;
    int n;

    do{
        cout<<"ingrese un numero por favor: ";
        cin>>n;
    }while (n<=0);
    
    if(n<=20){
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
     cout<<"el facotrial de: "<<n<<" es "<<factorial;
    }else{
        cout<<"el numero ingresado es mayor a 20";
    }
 
   
    
    return 0;
}