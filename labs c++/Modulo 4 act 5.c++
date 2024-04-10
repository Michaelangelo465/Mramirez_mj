#include <iostream>
using namespace std;

int main() {
    float compratotal; 
    int Tarjeta;

    cout<< "Ingrese la cantidad total pagada: ";
    cin>> compratotal;


    cout<< "Ingrese si tiene una tarjeta membresia VIP, Si [1] o No [2]: ";
    cin>> Tarjeta;

    if(Tarjeta == 1 || compratotal >= 150)
        {
        cout << "Cliente cualifica, puede aplicar el descuento especial.";
        } 
        else
        {
        cout << "Cliente no cualifica para descuento.";
        }

    return 0;


}