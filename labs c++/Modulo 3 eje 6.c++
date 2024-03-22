#include <iostream>
using namespace std;

int main()
{
    double area, base, altura, perimetro;
    //buscamos la altura y base para encontrar la area y perimetro//
    cout<< "Ingrese la medida de altura: ";
    cin >> altura;

    cout<< "Ingrese la medida de la base: ";
    cin >> base;


    area = altura * base;

    perimetro = 2 * altura + 2 * base;


    cout <<"El area del rectangulo es: " <<area<<endl;

    cout <<"El perimetro del rectangulo es: " <<perimetro<<endl;

    return 0;
}