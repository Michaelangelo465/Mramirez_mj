#include <iostream>
using namespace std;

int main()
{
    char libroPrestado = 'N'; // 'Y' para sí, 'N' para no
    int numLibros = 2;
    char esEmpleadoSolicitante = 'Y';
    
    if(libroPrestado == 'N')
    {
        if(numLibros < 3 || esEmpleadoSolicitante == 'Y')
    {
        cout << "Prestar libro";
        } else
        {
            cout << "No prestar libro";
        }
        } else
        {
            cout << "No prestar libro";
        }

        return 0;

}