#include <iostream>
using namespace std;

fact(int n) {
int resultado = 0;
resultado = 1; for (int i = 1; i <= n; i++) {
resultado *= i;
}return resultado;
}

/*Realice una funcion que se utilice para calcular el factorial de un numero.*/

int main(){
int n = 0;

    cout<<"Ingrese un numero entero: "<<"\n";
    cin>>n;

    cout<<"El factorial de su numero: "<<n<<" El factorial es: "<<fact(n);

    return 0;
}