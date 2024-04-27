#include <iostream>
using namespace std;

int main() 
{
    //definir variables
    int i;
    float Temperatura;
    double CalificacionTemperatura = 0;
    double promedio;

    for(i = 1; i <= 12; i++)
    {
    cout<<"Mes #"<<i<<":";
    cout<<"Ingrese la Temperatura del mes: "; //buscamos la temperatura de todos los 12 meses
    cin >> Temperatura;
    
    CalificacionTemperatura = CalificacionTemperatura + Temperatura;
    }

    promedio = CalificacionTemperatura / 12; //se consigue el promedio de los 12 meses

    cout<<"El promedio general de la temperatura de los 12 meses es: "<<promedio<<endl;

    return 0;
}