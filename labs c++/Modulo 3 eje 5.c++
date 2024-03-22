#include <iostream>
using namespace std;

int main()
{
    double altura, base, area;
    //buscamos la base y altura para encontrar el area//
    cout<<"Ingresa la medida de la base: ";
    cin>> base;

    cout<<"Ingresa la medida de la altura: ";
    cin>> altura;

    area = base * altura;
    
    cout <<"El area del rectangulo es: "<<area<<endl;

    return 0;
}