import java.util.Scanner;

public class ejamplo1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese un numero entero: ");
        int entero = scanner.nextInt();

        System.out.println("Ingrese un numero flotante: ");
        float flotante = scanner.nextFloat();

        System.out.println("Ingrese un caracter: ");
        char caracter = scanner.next().charAt(0);

        scanner.nextLine();

        System.out.println("Ingrese una cadena de caracteres: ");
        String cadena = scanner.nextLine();
    }
}