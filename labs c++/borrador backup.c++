#include <iostream>
using namespace std;

int main() {
int elemento;
int suma=0;

cout<<"Entrar el numero de elemento del arreglo: "; //solicitar el size del arreglo
cin>>elemento;
int arr[elemento]; // crea arreglo de size indicado por el usuario

cout<<"Entrar los valores del arreglo: "<< endl; //solicitar los valores del arreglo
for (int i = 0; i < elemento; i++) {  
    cout << "valores" << i+1 << ": ";
    cin>>arr[i];   
} 

for (int i = 0; i < elemento; i++) {
    suma = suma + arr[i]; //suma los valores del arreglo
}

cout << "La suma de los valores del arreglo es: " << suma << endl; //provee el valor de la suma
return 0;
}