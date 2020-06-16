#include "iostream"
using namespace std;

int reloj(int h1, int h2, int h3);

int main()
{
    int h;
    int m;
    int s;
    int hora;

    cout << "INGRESE LA HORA EN FORMATO DE 24 HORAS PORFAVOR: " << endl
         << endl;
    cout << "Hora: " << endl;
    cin >> h;
    cout << "Minutos: " << endl;
    cin >> m;
    cout << "Segundos: " << endl;
    cin >> s;

    cout << "La hora que usted ingreso es: " << endl;

    if (h < 10)
    {
        cout << 0;
        cout << h << ":";
    }
    else if (h > 24)
    {
        cout << "DATOS INVALIDOS EN HORAS!  ";
    }
    if (m < 10)
    {
        cout << 0;
        cout << m << ":";
    }
    else if (m > 60)
    {
        cout << "DATOS INVALIDOS EN MINUTOS!  ";
    }
    if (s < 10)
    {
        cout << 0;
        cout << s;
    }
    else if (s > 60)
    {
        cout << "DATOS INVALIDOS EN SEGUNDOS!  ";
    }
    if ((h <= -1) || (m <= -1) || (s <= -1))
        cout << "---- LOS DATOS SON INVALIDOS! ----";
    cout << endl
         << endl;

    cout << "La hora 1 segundo despues es: " << endl;
    hora = reloj(h, m, s);

    return 0;
}

int reloj(int h, int m, int s)
{
    s = s + 1;
    if (s >= 60)
    {
        s = 0;
        m = m + 1;
    }
    if (m >= 60)
    {
        m = 0;
        h = h + 1;
    }
    if (h >= 24)
    {
        h = 0;
    }
    if (h < 10)
        cout << 0;
    cout << h << ":";
    if (m < 10)
        cout << 0;
    cout << m << ":";
    if (s < 10)
        cout << 0;
    cout << s;

    return 1;
}
