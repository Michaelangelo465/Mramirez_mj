using System;
namespace mod5act2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 1;
            double suma = 0;
            //float Temperatura;
            while (i <= 12)
            {
                Console.WriteLine("Mes #" + i + ":"); //buscamos la temperatura de todos los 12 meses
                Console.Write("Ingrese la temperatura del mes: ", i);
                float Temperatura = float.Parse(Console.ReadLine());
               
                    suma = suma + Temperatura;
                i++;
            }
            
            double promedio = suma / 12; //se consigue el promedio de los 12 meses
            Console.WriteLine("EL promedio de las temperatura de los 12 meses es: " + promedio);    
        }         
            
    }
}
