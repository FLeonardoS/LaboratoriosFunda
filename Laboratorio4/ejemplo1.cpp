#include <iostream>

using namespace std;

int main(){

    int n;

    while(n!=0){
        cout<< "ingrese el numero por favor: ";
        cin>>n;
        if(n % 2 == 0){
            cout<<"el numero es par"<<endl;
        }else{
            cout<<"el numero es impar"<<endl;
        }
    }
    cout<<"metiste el numero 0";


    return 0;
}