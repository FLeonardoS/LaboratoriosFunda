#include "iostream"
using namespace std;

float SalarioReal(float horas1, float horas2); //Funcion para definir el salario mensual.
float SalarioTotal(float hora1, float hora2);  //Funcion para definir el salario total.

int main(){ //Declaracion de variables y cout para indicar al usuario que hacer.

    int id;
    float calculo1;
    float calculo2;
    int h1;
    int h2;
    cout << endl;
    cout << "EMPRESA MATRIX - AREA IT (3 EMPLEADOS) " << endl
         << endl;

    for (int acum = 1; acum <= 3; acum++)
    { //calculo de 3 empleados de un area en especifico.
        cout << "Porfavor ingrese su ID para identificarse en la empresa y calcular su salario: ";
        cin >> id;
        cout << "Bienvenido XXXXX XXXXX XXXXX: "
             << "ID: " << id << endl;
        cout << "Ingrese sus horas mensuales trabajadas porfavor: " << endl;
        cin >> h1;
        cout << "Ingrese sus horas extras trabajadas porfavor: " << endl;
        cin >> h2;
        cout << endl;
        calculo1 = SalarioReal(h1, h2);  //Mandar a llamar la funcion salario real.
        calculo2 = SalarioTotal(h1, h2); //Mandar a llamar la funcion salario total.
        cout << "Su salario mensual es:  ";
        cout << "$ " << calculo1 << endl
             << endl;
        cout << "Su salario sin aplicar ningun descuento es: ";
        cout << "$ " << calculo2 << endl
             << endl;
    }
    return 0;
}

float SalarioReal(float h1, float h2)
{ //Proceso para definir el salario mensual (real) por medio de la funcion.

    float total1;
    float total2;
    float total3;
    float salarioreal;
    float s1 = 1.75;
    float s2 = 2.50;

    total1 = (s1 * h1) + (s2 * h2);
    total2 = (total1 * 0.0625) + (total1 * 0.04);
    total3 = total1 - total2;
    salarioreal = total3;

    if (salarioreal >= 500)
        salarioreal = (salarioreal) - (salarioreal * 0.10);

    return salarioreal;
}

float SalarioTotal(float h1, float h2)
{ //Proceso para definir el salario total por medio de la funcion.
    float total1;
    float s1 = 1.75;
    float s2 = 2.50;
    total1 = (s1 * h1) + (s2 * h2);

    return total1;
}