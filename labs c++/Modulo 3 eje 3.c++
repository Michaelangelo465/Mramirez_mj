#include <iostream>
using namespace std;

int main()
{
    //buscamos el yearvactual y el cual naciste
    int yearNacido;
    int yearActual;
    int Resultado;


    cout<< "Ingrese el year en cual naciste: ";
    cin >> yearNacido;


    cout<< "Ingrese el year actual: ";
    cin >> yearActual;
    //te da tu edad aproximada//
    Resultado = yearActual - yearNacido;
    cout <<"La edad actual aproximada es: " <<Resultado<<endl;
    
    return 0;
}