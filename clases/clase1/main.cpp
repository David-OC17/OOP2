#include "numero.h"

using namespace std;

int main()
{
    numero n1, n2;

    n1.setNumero();
    n2.setNumero();
    cout<<"La suma de los numeros es: "<<n1.sumaNumeros(n2.getNumero())<<endl;
    cout<<"La suma de los numeros es: "<<n1.sumaNumeros(n2)<<endl;

    return 0;
}