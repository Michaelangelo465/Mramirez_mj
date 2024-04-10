#include <iostream>
using namespace std;

int main() 
{
    int numEstudiantes;
    double sumaCalificaciones = 0;
    double promedio;
    string nombreEstudiante;
    int calificacionEstudiante;
    int i;

    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>> numEstudiantes;

    for (i = 1; i <= numEstudiantes; i++)
    {
        cout<<"Estudiante #"<<i<<":";
        cout<<"Ingrese el nombre del estudiante: ";
        cin>>nombreEstudiante;
        cout<<"Ingrese la puntuacion de calificaciones: ";
        cin>>calificacionEstudiante;

        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;

    }
    promedio = sumaCalificaciones / numEstudiantes;

    cout<<"El promedio general de las calificaciones del grupo es:"<<promedio<<endl;

    return 0;
}