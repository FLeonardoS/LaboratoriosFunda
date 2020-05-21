#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    string palabra;
   
    cout << "Ingresa una palabra para ver si termina con la misma letra que inicia." << endl;
     cin >> palabra;
     
     int L1= palabra.at(0);
     int letra = palabra.size() -1;
     int L2= palabra.at(letra);


    if (L1 == L2){
        cout << "La palabra empieza y termina con la misma letra" << endl;

    } else {
        cout << "La palabra no incia y termina con la misma letra" << endl;
    }

   return 0;


}