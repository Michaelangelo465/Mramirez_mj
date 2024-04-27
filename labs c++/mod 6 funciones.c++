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
    else
    {
        resultado = Sueldo(ventas); //Llamada a la funcion

        cout<<"El sueldo a pagar es: "<< resultado <<endl;
    }
    
    return 0;
}

double Sueldo(double ventas)  //funcion
{
    if (ventas <1500)
        {return (ventas * 0.15);}
    else
    {return (ventas*0.15) + 125;}

        
}
    


