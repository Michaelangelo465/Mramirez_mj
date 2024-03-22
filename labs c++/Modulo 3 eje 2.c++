#include <iostream>
using namespace std;

int main()
{
    double velocidad, tiempo, distancia;
    //buscamos la velocidad y tiempo//
    cout<<"Ingresa la velocidad en km/hr: ";
    cin>> velocidad;

    cout<<"Ingresa el tiempo en hrs: ";
    cin>> tiempo;

    distancia = velocidad * tiempo;
    //se encuentra la distancia//
    cout <<"La distancia recorrida fue "<<distancia<< " km en total."<<endl;

    return 0;
}