#include "iostream"
using namespace std;

float promedio(float estatura[], int x, int y); //Funcion para promediar las estaturas.
int contador(float estatura[], float prom);     //Funcion para contar las estatutas

int main()
{
    float e[100]; //Arreglo para las diferentes estaturas.
    int n = 25;
    int i;
    cout << endl;
    cout << "PROGRAMA PARA CALCULAR Y COMPARAR EL PROMEDIO DE ALTURAS DE 25 ESTUDIANTES." << endl;
    cout << "Ingresa las alturas en formato metros, ejemplo: 1.78:" << endl;
    for (i = 0; i < n; i++)
    { //for para ingresar las 25 estaturas solicitadas
        cin >> e[i];
    }

    contador(e, promedio(e, n, i)); //Llamado de la funcion.

    return 0;
}

float promedio(float e[], int n, int i)
{ //Proceso para realizar la suma y promedio de las estaturas.
    float suma = 0, promedioe;
    for (i = 0; i < n; i++)
    {
        suma = suma + e[i];
    }
    promedioe = suma / 25;
    cout << "El promedio de las 25 estaturas es: " << promedioe << " m" << endl;
    return promedioe;
}

int contador(float e[], float promedio)
{                  //Proceso para contar que estaturas estan mas arriba y
    int cont1 = 0; //mas abajo que la media.
    int cont2 = 0;

    for (int i = 0; i < 25; i++)
    {
        if (e[i] > promedio)
        {
            cont1++;
        }
        else if (e[i] < promedio)
        {
            cont2++;
        }
    }

    cout << "La cantidad de estudiantes con altura mayor que la media son: " << cont1 << endl;
    cout << "La cantidad de estudiantes con altura menor que la media son: " << cont2 << endl;

    return cont1, cont2;
}
