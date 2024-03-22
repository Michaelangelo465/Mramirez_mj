#include <iostream>
using namespace std;

int main()
{
    //Definir variables//
    double velocidad, tiempo, distancia;

    //Ingresar la velocidad y tiempo//
    cout<<"Ingresa la velocidad en km/hr: ";
    cin>> velocidad;

    cout<<"Ingresa el tiempo en hrs: ";
    cin>> tiempo;

    //Calcula la distancia recorrida en un viaje//
    distancia = velocidad * tiempo;
    
    cout <<"La distancia recorrida fue "<<distancia<< " km en total."<<endl;

    return 0;
}