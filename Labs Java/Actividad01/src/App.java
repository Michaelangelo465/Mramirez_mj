import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un numero entero: ");
        int entero = scanner.nextInt();

        System.out.print("Ingrese un numero flotante: ");
        float flotante = scanner.nextFloat();

        System.out.print("Ingrese un caracter: ");
        char caracter = scanner.next().charAt(0);

        System.out.println("Ingrese una cadena de caracteres: ");
        String cadena = scanner.nextLine();

        

        scanner.nextLine();

        System.out.println("El numero ingresado fue: " + entero);
      
    }
}
