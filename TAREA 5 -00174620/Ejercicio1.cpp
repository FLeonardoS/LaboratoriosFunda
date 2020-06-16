#include "iostream"
using namespace std;

int euclides(int n1, int n2);
int main()
{

    int n1;
    int n2;
    int mcd;
    cout << "Ingrese dos numeros para obetener el MCD: " << endl;
    cout << "Ingrese el numero mayor: " << endl;
    cin >> n1;
    cout << "Ingrese el numero menor: " << endl;
    cin >> n2;
    mcd = euclides(n1, n2);
    cout << "El MCD es: " << mcd;

    return 0;
}
int euclides(int a, int b)
{
    int residuo;
    do
    {
        residuo = a % b;
        if (residuo != 0)
        {
            a = b;
            b = residuo;
        }
    } while (residuo != 0);

    return b;
}
