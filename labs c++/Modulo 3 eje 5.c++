#include <iostream>
using namespace std;

int main()
{
    //Definir variables//
    double altura, base, area;

    //Ingresar medida de la base y altura//
    cout<<"Ingresa la medida de la base: ";
    cin>> base;

    cout<<"Ingresa la medida de la altura: ";
    cin>> altura;

    //Calcula el area del rectangulo//
    area = base * altura;
    
    cout <<"El area del rectangulo es: "<<area<<endl;

    return 0;
}