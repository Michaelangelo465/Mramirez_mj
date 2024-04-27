#include <iostream>
using namespace std;

double Sueldo(double ventas); //Definir funcion

int main()
{
    double ventas, resultado;

    cout<<"Cuantas ventas realizo el vendedor?: ";
    cin>>ventas;

    if(ventas <= 0)
    { 
        cout<<"El valor entrado no es valido."<<endl;
    }
    else if (ventas <1500)
    {
        resultado = Sueldo(ventas); //Llamada a la funcion

        cout<<"El sueldo a pagar es: "<< resultado <<endl;
    }
    else
    {resultado = Sueldo(ventas) + 125; //Llamada a la funcion

        cout<<"El sueldo a pagar es: "<< resultado <<endl;}
    return 0;
}

double Sueldo(double ventas)  //funcion
{
    
        return (ventas * 0.15);
    }