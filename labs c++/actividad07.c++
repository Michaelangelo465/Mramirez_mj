#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout<<"Bienvenido a la tienda de musica! : "<<endl;
    cout<<"INSTRUMENTOS"<<endl;
    cout<<"1. Guitarra "<<endl;
    cout<<"2. Piano "<<endl;
    cout<<"3. Bateria "<<endl;
    cout<<"4. Violin "<<endl;
    cout<<"5. Flauta "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Ingrese el tipo de instrumento: ";
    cin>> opcion;

    switch(opcion)
    {
        case 1: //Guitarra
        cout<<"El descuento es del 10%."<<endl;
        break;

        case 2: //Piano
        cout<<"El descuento es del 15%."<<endl;
        break;

        case 3: //Bateria
        cout<<"El descuento es del 20%."<<endl;
        break;

        case 4: //Violin
        cout<<"El descuento es del 12%."<<endl;
        break;

        case 5: //Flauta
        cout<<"El descuento es del 8%."<<endl;
        break;

        default://En caso de que el usuario ingrese una opcion no valida
        cout<<"Opcion NO valida. Por favor, selecciona un instrumento del menu"<<endl;
    }

    return 0;
    
}