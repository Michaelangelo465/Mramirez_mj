import java.util.Scanner;

public class mod4 {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner (System.in);

        int Antiguedad;
        

        System.out.print("Ingrese year de antiguedad trabajando: ");
        Antiguedad = scanner.nextInt();
        

        if(Antiguedad>=5)
        {
            
            System.out.println("El bono del empleado sera de $1000");
        }
        if(Antiguedad<5)
        {
            System.out.println("El empleado no recibira ningun bono");

        }
       
    }
}
