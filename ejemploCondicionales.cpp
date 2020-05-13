#include "iostream"
using namespace std;

int main (){

    int num1, num2;
    cout << "ingrese un numero" << endl;
    cin >> num1;
    cout <<"ingrese otro numero" <<endl;
    cin >> num2;

    if (num1 > num2){
        cout << num1 << "Es mayor que: " << num2;
    }else if(num1 < num2){
        cout << num2 <<" Si mayor que: " << num1;
    }else{
        cout << "El numero: " << num1 <<" y el numero: " << num2 <<"son iguales";
    }


    return 0;

}