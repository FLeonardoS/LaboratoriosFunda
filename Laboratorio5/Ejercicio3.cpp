#include <iostream>

using namespace std;

//declarar
int solicitar(int n)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        char vocal;
        cout << "ingrese una vocal: ";
        cin >> vocal;

        switch (vocal)
        {
        case 'a':
            contador += 1;
            break;
        case 'e':
            contador += 1;
            break;
        case 'i':
            contador += 1;
            break;
        case 'o':
            contador += 1;
            break;
        case 'u':
            contador += 1;
            break;
        default:
            break;
        }
    }
    return contador;
}

int main()
{
    int n;
    cout<<"ingrese la cantidad de caracteres a ingresar: ";cin>>n;
    cout<<solicitar(n);
    return 0;
}
