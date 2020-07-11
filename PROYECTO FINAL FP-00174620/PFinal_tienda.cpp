#include <iostream>
using namespace std;

const int longCad = 20; //Estructura para el ingreso de los diferentes datos.

struct costoPorArticulo //Estructura para los diferentes datos.
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

                //Funciones creadas para realizar los diferentes procesos de almacenamiento y diferentes calculos.
void leer_datos(costoPorArticulo cant_art[], int produc);
void costoXarticulo (costoPorArticulo cant_art[], int produc);
void ver_articulos (costoPorArticulo cant_art[], int produc);
void total (costoPorArticulo cant_art[], int produc);

                //Main en el cual se solicita la cantidad de articulos que se desean comprar.
int main (){
int Cproductos=0;
cout << endl;
cout << "SUPERMERCADO MATRIX, DONDE LOS PRECIOS SON DE PELICULA!" << endl;
cout << "INGRESE LA CANTIDAD DE PRODUCTOS QUE DESEA COMPRAR. ";
cin >> Cproductos;
if (Cproductos <= -1){ //Validacion para evitar introducir numeros negativos.
    cout << "INGRESE DATOS VALIDOS!";
    exit (0);
}
costoPorArticulo cantidad_articulos[Cproductos]; //Arreglo donde guardan los diferentes datos.

                //Llamar a las diferentes funciones en el Main.
leer_datos(cantidad_articulos, Cproductos);
costoXarticulo(cantidad_articulos, Cproductos);
ver_articulos(cantidad_articulos, Cproductos);
total (cantidad_articulos, Cproductos);


}
                //Funcion creada para el ingreso de los datos solicitados.
void leer_datos (costoPorArticulo cantidad_articulos[], int Cproductos){
for (int i=0; i < Cproductos; i++){
costoPorArticulo productos;
cout << endl;
cout <<"Ingresa el nombre del producto: ";
cin >> productos.nombreArticul;
cout << "Ingresa la cantidad: ";
cin >> productos.cantidad;
cout << "Ingresa el precio del producto: $";
cin >> productos.precio;
cout << endl;
cantidad_articulos[i]=productos;
if ((productos.cantidad <= -1) || (productos.precio <= -1)){ //Validacion para evitar numeros negativos.
    cout << "INGRESE DATOS VALIDOS!";
    exit(0);
        }
    }
}
                //Funcion que calcula el costo por articulo de los diferentes productos.
void costoXarticulo (costoPorArticulo cantidad_articulos[], int Cproductos){
float costoT;
for (int i =0; i < Cproductos; i++){
costoT = cantidad_articulos[i].cantidad * cantidad_articulos[i].precio;
cantidad_articulos[i].costoPorArticulo=costoT;
    }
}
//Funcion para mostrar los datos ingresados anteriormente.
void ver_articulos (costoPorArticulo cantidad_articulos[], int Cprodcutos){
int contador =0;
cout << "LISTA DE PRODUCTOS:" << endl;
for (int i=0; i < Cprodcutos; i++){
contador ++;

cout << "Producto No: " << contador <<" "<< cantidad_articulos[i].nombreArticul << endl;
cout << "     Cantidad de producto/s: " << cantidad_articulos[i].cantidad;
cout << "     Precio del producto por cantidad (c/u): $" << cantidad_articulos[i].precio;
cout << "     Precio total del producto: $" << cantidad_articulos[i].costoPorArticulo << endl;
    }
}
                //Funcion para calcular el total de los prodcutos comprados.
void total (costoPorArticulo cantidad_articulos[], int Cproductos){
float Ptotal =0;
for (int i=0; i< Cproductos; i++){
Ptotal = Ptotal + cantidad_articulos[i].costoPorArticulo;
    }
cout << endl;
cout << "                           GRACIAS POR SU COMPRA, SU TOTAL ES: $" << Ptotal;
}









