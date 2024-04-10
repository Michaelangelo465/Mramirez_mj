#include <iostream>
using namespace std;

int main()
{
    char Y, N, miembro;
    int entradas;

    cout<< "Ingrese [Y] si es miembro del teatro y [N] si no es miembro: ";
    cin>> miembro;

    cout<< "Cuantas entradas deseas comprar?: ";
    cin>> entradas;

    if(miembro == 'Y' )
    {
        if(entradas > 5 ){
        cout<<"su descuento es de 15%."<<endl;
        } 
        else {
        cout<<"su descuento es de 10%."<<endl;
        }
        } else { 
        if(entradas > 10) {
            cout<< "su descuento es de 5%."<<endl;
        } else {
            cout<< "No hay descuento."<<endl;
        }
        }

    return 0;

}