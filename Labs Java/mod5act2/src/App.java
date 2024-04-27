import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception
    {
        Scanner scanner = new Scanner (System.in);

    int i;
    float Temperatura;
    double CalificacionTemperatura = 0;
    double promedio;
    
    i=1;
    do {
        System.out.print("Mes #" + i + ":" ); //buscamos la temperatura de todos los 12 meses
        System.out.print("Ingrese la Temperatura del mes: ");
        Temperatura = scanner.nextInt();

        CalificacionTemperatura = CalificacionTemperatura + Temperatura;
        i++;
    } 
    while (i<=12); 
    
    promedio = CalificacionTemperatura / 12; //se consigue el promedio de los 12 meses

    System.out.print("El promedio general de la temperatura de los 12 meses es: " + promedio );

    }
}