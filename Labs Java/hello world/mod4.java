import java.util.Scanner;

public class mod4 {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner (System.in);

        int Antiguedad;
        int Bonificacion;

        System.out.print("Ingrese year de antiguedad trabajando: ");
        Antiguedad = scanner.nextInt();
        Bonificacion = scanner.nextInt();

        if(Antiguedad>=5){
        Bonificacion = 1000;
        }
        if(Antiguedad<5){
            Bonificacion = 0;
            }
        System.out.println("El bono del empleado es: "  + Bonificacion);
    }
}
