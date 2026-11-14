import java.util.Scanner;

public class Hola {
    public static void main(String[] args) {
        float a, b, c = 0.0f;
        int opcion=0;
        Scanner scanner = new Scanner(System.in);
        //MENU
        System.out.println("Bienvenido a la calculadora");
        System.out.println("Opcion 1: Suma");
        System.out.println("Opcion 2: Resta");
        System.out.println("Opcion 3: Multiplicacion");
        System.out.println("Opcion 4: Division");
        opcion = scanner.nextInt();
        //DATOS
        System.out.println("Introduce el primer número: ");
        a = scanner.nextFloat();
        System.out.println("Introduce el segundo número: ");
        b = scanner.nextFloat();
        //OPERACIONES
        switch (opcion) {
            case 1:
                c = a + b;
                System.out.println("La suma de " + a + " y " + b + " es: " + c);
                break;
            case 2:
                c = a - b;
                System.out.println("La resta de " + a + " y " + b + " es: " + c);
                break;
            case 3:
                c = a * b;
                System.out.println("La multiplicación de " + a + " y " + b + " es: " + c);
                break;
            case 4:
                if (b != 0) {
                    c = a / b;
                    System.out.println("La división de " + a + " y " + b + " es: " + c);
                } else {
                    System.out.println("Error: División por cero no permitida.");
                }
                break;
            default:
                System.out.println("Opción no válida.");
        }
        scanner.close();
    }
}