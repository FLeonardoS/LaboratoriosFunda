#include <iostream> 
#include <string.h> 
using namespace std;

struct registros
{
    string nombre;
    string apellido;
    string estado;
    int can;
    float notas[];
    
};

float promedio (float *prom, int n){
struct regis;
string aprobado = "Aprobado";
string reprobado = "Reprobado";
float nota=0;
for (int i=0;i<n;i++){
nota = nota + *(prom+1) / n;
}
cout << "El promedio del estudiante es: " << nota << endl;
if (nota >=6){
    cout << "El estado del estudiante es: " << aprobado <<endl;
} else
{
    cout << "El estado del estdiante es: " << reprobado <<endl;
}
return nota;
}

int main (){
struct registros regis;
cout <<"Sistema de notas: " <<endl;
cout <<"Ingresa el nombre del estudiante: ";
getline (cin, regis.nombre);
cout << "Apellido: ";
getline (cin, regis.apellido);
cout <<"Ingrese el estado del estudiante: ";
getline (cin, regis.estado);  
cout <<"Ingrese la cantidad de notas que desee: ";
cin >> regis.can;
float notas[regis.can];
cout <<"Ingresa las notas: " <<endl;
for (int i = 0 ;i<regis.can; i++){
cin >> regis.notas[i];
}
promedio (regis.notas, regis.can);

return 0;
}