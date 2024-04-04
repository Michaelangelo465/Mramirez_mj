import java.util.Scanner;
public class activi04 {
 public static void main(String[] args) 
    {
        Scanner scanner = new Scanner (System.in);

        int tarjeta;
        
        System.out.print("Si la tarjeta esta activa Ingresa [1] o ingresa el [2] si esta inactiva: ");
        tarjeta = scanner.nextInt();
        
        if(tarjeta == 1)
        { 
            System.out.println("Se puede hacer prestamos porque su tarjeta esta activa.");
        }
        if(tarjeta == 2)
        {
            System.out.println("No se puede hacer prestamos porque su tarjeta esta inactiva.");
        }
        else
        {
            System.out.println("Su respuesta no fue valida");
        }
    }
}