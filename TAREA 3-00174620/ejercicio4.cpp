#include "iostream"
using namespace std;

int main ()
{
    string producto;
    float cantidad;
    float precio;
   

    cout <<"Ingrese el producto que desea comprar: " <<endl;
    cin>> producto; cout <<endl;
    cout <<"Ingrese la cantidad que desea comprar: "<<endl;
    cin >> cantidad; cout <<endl;
    cout <<"Ingrese el precio del producto: "<<endl;
    cin >> precio; cout <<endl;
    float total = precio * cantidad; cout <<endl;
    cout <<"Gracias por su compra!, su total es: " <<endl;
    cout << "Producto: " << producto <<"  Cantidad: " <<cantidad <<"  Total: " <<"$ " <<total;
    
      
   
    return 0;

}