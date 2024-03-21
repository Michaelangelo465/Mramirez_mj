#include <iostream>
using namespace std;

int main()
{
    int velocidad, tiempo, distancia;

    cout<<"Ingresa la velocidad: ";
    cin>> velocidad;

    cout<<"Ingresa el tiempo: ";
    cin>> tiempo;

    distancia = velocidad * tiempo;
    
    cout <<"La distancia fue "<<distancia<< " en total."<<endl;

    return 0;
}