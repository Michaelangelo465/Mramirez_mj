#include <iostream>
using namespace std;

int main()
{
    //Definir variables//
    int yearNacido, yearActual, Resultado;

    //Ingresar el yearActual y el cual naciste//
    cout<< "Ingrese el year en cual naciste: ";
    cin >> yearNacido;

    cout<< "Ingrese el year actual: ";
    cin >> yearActual;

    //Calcula edad aproximada//
    Resultado = yearActual - yearNacido;

    cout <<"La edad actual aproximada es: " <<Resultado<<endl;
    
    return 0;
}