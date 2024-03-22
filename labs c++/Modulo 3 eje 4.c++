#include <iostream>
using namespace std;

int main()
{
    //Definir variables//
    double area, lado;

    //Ingresar medida del lado//
    cout<< "Ingrese la medida de un lado del cuadrado: ";
    cin >> lado;

    //Calcula el area del cuadrado//
    area = lado * lado;
    
    cout <<"El area del cuadrado es: " <<area<<endl;

    return 0;
}