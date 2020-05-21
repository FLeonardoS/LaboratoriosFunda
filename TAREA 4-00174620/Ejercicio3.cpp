#include "iostream"
using namespace std;

int main (){


int n1;
cout <<"Ingresa un numero y verifica si es positivo, negativo o es cero." << endl;
cin >> n1;

if (n1 > 0){
    cout << "El numero es positivo";


} else if (n1 < 0){
    cout << "El numero es negativo";

} else if (n1 == 0){
    cout << "El numero es 0";

}
    return 0;

    }
