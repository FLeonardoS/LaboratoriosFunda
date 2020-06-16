#include "iostream"
using namespace std;

int fecha(int d, int m, int a);

int main()
{
    int dd;
    int mm;
    int aa;
    int vf;
    cout << endl;
    cout << "INGRESE LA FECHA ACTUAL PORFAVOR: " << endl
         << endl;
    cout << "Dia: " << endl;
    cin >> dd;
    cout << "Mes: " << endl;
    cin >> mm;
    cout << "Año: " << endl;
    cin >> aa;

    cout << "La fecha que usted ingreso es : " << endl;
    if (dd >= 10)
    {
        cout << dd << "-";
    }
    else if (dd < 10)
    {
        cout << 0;
        cout << dd << "-";
    }
    if (mm >= 10)
    {
        cout << mm << "-";
    }
    else if (mm < 10)
    {
        cout << 0;
        cout << mm << "-";
    }
    if (aa < 10)
    {
        cout << 0;
        cout << aa;
    }
    else if (aa >= 10)
    {
        cout << aa;
    }
    if ((dd > 31) || (mm > 12) || (aa <= -1) || (dd <= -1) || (mm <= -1))
    {
        cout << "---- LOS DATOS SON INVALIDOS! ----";
        exit(0);
    }

    cout << endl
         << endl;

    cout << "La fecha un dia despues es: " << endl;
    vf = fecha(dd, mm, aa);

    return 0;
}

int fecha(int dd, int mm, int aa)
{
    dd = dd + 1;
    if (dd >= 31)
    {
        dd = 1;
        mm = mm + 1;
    }
    if (mm >= 13)
    {
        mm = 1;
    }
    if ((dd == 1) && (mm == 1))
    {
        aa = aa + 1;
    }
    if (dd < 10)
        cout << 0;
    cout << dd << "-";
    if (mm < 10)
        cout << 0;
    cout << mm << "-";
    if (aa < 10)
        cout << 0;
    cout << aa;
    if (aa % 400 == 0)
    {
        cout << " El años es bisiesto!";
    }
    else if ((aa % 4 == 0) && (aa % 100 != 0))
    {
        cout << " El años es bisiesto!";
    }
    else
    {
        cout << " El años NO es bisiesto!";
    }

    return 1;
}
