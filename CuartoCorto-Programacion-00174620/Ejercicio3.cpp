#include "iostream"
using namespace std;

void llmatriz(double llenar[][5], int x);  //Funcion para llenar la matriz con las 5 notas.
void Vpromedio(double califi[][5], int x); //Funcion para promediar las notas.

int main()
{
    int n;
    double cali[][5] = {0}; //Matriz para las notas.
    cout << endl
         << "SISTEMA DE NOTAS ESTUDIANTIL" << endl
         << endl;
    cout << "Ingrese la cantidad de estudiantes que desea evaluar: ";
    cin >> n;
    cout << endl;
    Vpromedio(cali, n); //Llamado de la funcion promedio.

    return 0;
}
void llmatriz(double matriz[][5], int n)
{ //Proceso para el ingreso de notas.
    int carnet;
    double j;
    for (int i = 0; i < n; i++)
    {

        cout << "Ingrese el carnet del estudiante:  ";
        cin >> carnet;
        cout << "Estudiante: XXXXXX XXXXXX XXXXX XXXXX" << endl;
        cout << "Ingrese las diferentes notas (20%)" << endl;
        for (int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
            if ((matriz[i][j] >= 11) || (matriz[i][j] <= -1))
            {
                cout << "INGRESE SOLO NOTAS VALIDAS!";
                exit(0);
            }
        }
    }
}
void Vpromedio(double matriz[][5], int n)
{                        //Proceso para promediar las diferentes notas y notificar si aprobó o reprobó.
    llmatriz(matriz, n); //llamar funcion llmatriz para juntar el proceso.
    int contador = 0;
    double pf;
    for (int i = 0; i < n; i++)
    {
        contador++;
        pf = 0;
        for (int j = 0; j < 5; j++)
        {
            pf = pf + (matriz[i][j] * 0.20);
        }
        if (pf >= 6)
        {
            cout << "El estudiante numero " << contador << " aprobo la materia,"
                 << " su nota final es: " << pf << endl;
        }
        else
        {
            cout << "El estudiante numero " << contador << " reprobo la materia,"
                 << " su nota final es: " << pf << endl;
        }
    }
}
