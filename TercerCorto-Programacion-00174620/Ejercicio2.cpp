#include "iostream"
using namespace std;

int adivina(int n, int m); //Funcion para evaluar los un numero magico.

int main()
{
    int numero;      //Variable para almacenar los numeros que el usuairo piense
    int magico = 17; //Numero a adivinar por el usuario
    int adivinador;

    cout << "BIENVENIDO AL NUMERO MAGICO!" << endl
         << endl;
    adivinador = adivina(numero, magico); //llamar a la funcion

    return 0;
}

int adivina(int n, int m)
{
    int i = 4;   //Decremento de intentos.
    int con = 0; //Contador de intentos.

    do
    {
        cout << "Ingrese un numero en el rango del 1-100. Solo tiene 5 intentos.  ";
        cin >> n;
        cout << endl;

        if (i == 0)
        { //Ya no se tienen intentos
            cout << "--------Ya no tienes intentos--------" << endl
                 << endl;
            cout << "-------GRACIAS POR PARTICIPAR---------" << endl
                 << endl;
            system("pause");
            exit(0);
        }
        if (n > m)
        {
            cout << "Digite un numero menor."
                 << " - Le quedan " << i << " intentos" << endl;
        }
        if (n < m)
        {
            cout << "Digite un numero mayor."
                 << " - Le quedan " << i << " intentos" << endl;
        }

        i--;   //Decremento
        con++; //Incremento

    } while (n != m);

    {

        if (n == m)
        {
            cout << "FELICIDADES ADIVINASTE EL NUMERO! "; //El usuario logro adivinar el numero.
            cout << "   Numero de intentos: " << con << endl;
            system("pause");
        }
        else
        {
        }
    }
    return 1;
}
