#include <iostream>
#include <string>

int main() {
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout<< "Ingrese un numero entero: ";
    cin >> entero;

    cout <<"Ingrese un numero flotante: ";
    cin >> flotante;

    cout <<"Ingrese un caracter: ";
    cin >> caracter;

    cout<<"Ingrese una cadena de caracteres: ";
    cin.ignore(); // ignorar el '\n' dejado por
    // cin >> caracter

    getline(cin, cadena); // Lee una linea de texto desde la
    //entrada estandar (cin) y la almacena en la variable cadena
    return 0;
}