#include <iostream>
using namespace std;

int main()
{
    
    int yearNacido;
    int yearActual;
    int Resultado;


    cout<< "Ingrese el year en cual naciste: ";
    cin >> yearNacido;


    cout<< "Ingrese el year actual: ";
    cin >> yearActual;
    
    Resultado = yearActual - yearNacido;
    cout <<"La edad aproximada actual es: " <<Resultado<<endl;
    
    return 0;
}