#include "iostream"
using namespace std;

int main()
{

    int dolar;
    float euro = 1.33;
    
    cout << "Ingrese la cantidad de dolares: " << endl;
    cin >> dolar;
    cout << "La coversion de dolares a Euros es: " << endl;
    float conversion = dolar * euro;
    cout << conversion;    
    return 0;

}