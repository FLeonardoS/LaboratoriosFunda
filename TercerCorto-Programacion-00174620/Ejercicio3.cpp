#include "iostream"
using namespace std;

bool anio(int yyyy); //Funcion para el cálculo del año.

int main()
{
    int a; //variable para ingresar el año.
    int a2; cout<< endl;
    cout << "INGRESA UN AÑO Y VERIFICA SI ES O NO BISIESTO" << endl;
    cin >> a;
    a2 = anio(a); //Llamar la funcion.

    if (anio(a) == 1)
    { //Verificar si cumple los parametros establecidos.
        cout << "El año que ingreso es bisiesto" << endl;
    }
    else if (anio(a) == 0)
    {
        cout << "El año que ingreso no es bisiesto" << endl;
    }
// ----------------1 = True --- 0 = False--------------------------------------
    return 0;
}
bool anio(int y)
{
    if (y % 400 == 0)
    { //Verificar si es divisible entre 400
        return 1;
    }
    else if ((y % 4 == 0) && (y % 100 != 0))
    { //Verificar si el año si es divisible entre 4 y si no es divisible entre 100.
        return 1;
    }
    else
    { // Si no cumple ninguna instruccion anterior no es bisiesto
        return 0;
    }
}