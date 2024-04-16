using System;

namespace MOD5Act1Cicloprob2
{
    internal class Program
    {
        static void Main(string[] args)
        {
           
            Console.WriteLine("Entre su nombre: ");
            string nombre = Console.ReadLine();
            
            for (int i=0; i<11; i++) {
                Console.WriteLine("Hola" + nombre + "!");

            }
                


        }
    }
}