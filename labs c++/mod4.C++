#include <iostream>
using namespace std;

int main()
{
    int tarjeta;

    cout<<"Si la tarjeta esta activa Ingresa [1] o ingresa el [2] si esta inactiva: ";
    cin>> tarjeta;
    
    
    try
    {
        if(tarjeta != 1) 
        {
            throw "No se puede hacer prestamos porque su tarjeta esta inactiva.";
        }

        cout<<"Se puede hacer prestamos porque su tarjeta esta activa. ";
    }
    catch(const char* mensaje)
    {
        cout<<"Excepcion capturada: "<<mensaje<<endl;
    }
    
    return 0;
}