#include <iostream>
using namespace std;

int main()
{
    int examen1, examen2, examen3, examen4, promedio;
    
    //buscamos la puntuacion de los exames//
    cout<<"Ingresa la nota del examen1: ";
    cin>> examen1;

    cout<<"Ingresa la nota del examen2: ";
    cin>> examen2;

    cout<<"Ingresa la nota del examen3: ";
    cin>> examen3;

    cout<<"Ingresa la nota del examen4: ";
    cin>> examen4;
//se consigue ahora el promedio de las notas//
    promedio = examen1 + examen2 + examen3 + examen4 /4;

    cout <<"El promedio fue "<<promedio<< " de las notas."<<endl;

    return 0;

}