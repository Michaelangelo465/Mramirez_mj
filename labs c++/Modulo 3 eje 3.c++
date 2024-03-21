#include <iostream>
using namespace std;

int main()
{
    
    int AnoNacido;
    int AnoActual;
    int Resultado;


    cout<< "Ingrese el year en cual naciste: ";
    cin >> AnoNacido;


    cout<< "Ingrese el year actual: ";
    cin >> AnoActual;
    
    Resultado = AnoActual - AnoNacido;
    cout <<"La edad aproximada actual es: " <<Resultado<<endl;
    
    return 0;
}