#include "iostream"
using namespace std;

bool anio(int yyyy);

int main()
{
    int a;
    int a2;
    cout << endl;
    cout << "INGRESA UN AÑO Y VERIFICA SI ES O NO BISIESTO" << endl;
    cin >> a;
    a2 = anio(a);

    if (anio(a) == 1)
    {
        cout << "El año que ingreso es bisiesto" << endl;
    }
    else if (anio(a) == 0)
    {
        cout << "El año que ingreso no es bisiesto" << endl;
    }

    return 0;
}
bool anio(int y)
{
    if (y % 400 == 0)
    {
        return 1;
    }
    else if ((y % 4 == 0) && (y % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}