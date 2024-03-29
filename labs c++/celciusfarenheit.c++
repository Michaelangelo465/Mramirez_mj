#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout<<"Ingresa la temperatura en grados Celsius: ";
    cin>> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout <<"La temperatura en Fahrenheit: "<<fahrenheit<< "."<<endl;
    return 0;
}