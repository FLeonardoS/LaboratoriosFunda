#include<iostream>
#include<string.h>

using namespace std;

int main(){
 
 string palabra;
 int longitud;
 
 cout << "Ingresa una palabra para verificar si posee 10 caracteres y si es par o impar." << endl;
 cin >> palabra;
longitud = palabra.size();   


if (longitud >=10){
    cout << "La palabra tiene 10 o mas letras." << endl;
}else{
        cout << "La palabra tiene menos de 10 letras"<< endl;
}



if (longitud%2== 0){
        cout << "La cantidad de letras es par" << endl;
    }else{
        cout << "La cantidad de letras es impar" << endl;
    }


return 0;




}