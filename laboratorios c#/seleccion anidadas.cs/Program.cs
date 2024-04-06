using System;

namespace Ejercicio_Mod4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            char libroPrestado = 'N'; // 'Y' para sí, 'N' para no
            int numLibrosSolicitante = 2;
            char esEmpleadoSolicitante = 'Y';


            if(libroPrestado == 'N') {
                if(NumLibros < 3 || EsEmpleado == 'Y') {
                    Console.WriteLine("Prestar libro");
                    } else {
                        Console.WriteLine("No prestar libro");
                    }
            }else {
                Console.WriteLine("No prestar libro");
            }
        }
    }
}