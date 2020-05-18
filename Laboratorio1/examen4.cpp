#include "iostream"
#include "math.h"
using namespace std;

int main (){
    int a = 20;
    int k = 5;
    int j = 10;
    int m;

    m = k ++ + ( a*=10) + --j;

    cout << "la respuesta " << m; 
    return 0;

}