using System;

namespace Ejercicio_Mod4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese si su tarjeta esta activa[1] o inactiva[2]: ");
            int tarjeta = int.Parse(Console.ReadLine());

            if(tarjeta == 1)
            Console.WriteLine("Se puede hacer prestamos porque su tarjeta esta activa.");

            if(tarjeta == 2)
            Console.WriteLine("No se puede hacer prestamos porque su tarjeta esta inactiva.");
        }
    }
}