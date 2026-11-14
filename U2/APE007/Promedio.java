import java.util.Scanner;

public class Promedio {
    public static void main(String[] args) {
        //DECLARAMOS CONSTANTES 
        final double EVALUACION_INDIVIDUAL = 0.30;
        final double TRABAJO_GRUPAL = 0.30;
        final double EVALUACION_FINAL = 0.40;
        
        //DECLARAMOS VARIABLES
        double nota_individual, nota_trabajo_grupal, nota_evaluacion_final = 0.0d;
        double nota_individual_ponderada, nota_trabajo_grupal_ponderada, nota_evaluacion_final_ponderada, nota_final = 0.0d;
        String nivel_desempeno, estado_final  = " ";
        int nota_entera = 0;

        Scanner scanner = new Scanner(System.in);

        //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS DE ENTRADA
        System.out.println("-----A continuacion ingrese sus calificaciones (0-10)----");
        System.out.print("Estimado usuario ingese la calificacion de la Evaluacion Individual: ");
        nota_individual = scanner.nextDouble();
        System.out.print("Ingrese la calificacion del Trabajo Grupal: ");
        nota_trabajo_grupal = scanner.nextDouble();
        System.out.print("Ingrese la calificacion de la Evaluacion Final: ");
        nota_evaluacion_final = scanner.nextDouble();

        //VALIDAMOS QUE EL USUARIO HAYA INGRESADO LOS DATOS DENTRO DEL RANGO
        if ((nota_individual < 0 || nota_individual > 10)||
           (nota_trabajo_grupal < 0 || nota_trabajo_grupal > 10)||
           (nota_evaluacion_final < 0 || nota_evaluacion_final > 10)) {
            System.out.println("Los datos ingresados son incorrectos.");
           } else { 
            
            //REALIZAMOS LOS CALCULOS MATEMATICOS
            nota_individual_ponderada = nota_individual * EVALUACION_INDIVIDUAL;
            nota_trabajo_grupal_ponderada = nota_trabajo_grupal * TRABAJO_GRUPAL;
            nota_evaluacion_final_ponderada = nota_evaluacion_final * EVALUACION_FINAL;
            nota_final = nota_evaluacion_final_ponderada + nota_individual_ponderada + nota_trabajo_grupal_ponderada;

            //CLASIFICACION DE NIVELES DE DESEMPENO 

           nota_entera = (int) nota_final;
            switch (nota_entera) {
                case 10:
                case 9:
                    nivel_desempeno = "Excelente";
                    break;
                case 8:
                    nivel_desempeno = "Muy bueno";
                    break;
                case 7:
                    nivel_desempeno = "Bueno";
                    break;
                case 6:
                case 5:
                    nivel_desempeno = "Regular";
                    break;
                default:
                    nivel_desempeno = "Deficiente";
                    break;
            }
            
            //PRESENTAMOS LOS DATOS AL USUARIO
            System.out.println("---------------------------------");
            System.out.println("Calificaciones Ingresadas:");
            System.out.println("1. Evaluación Individual: " + nota_individual);
            System.out.println("2. Trabajo Grupal: " + nota_trabajo_grupal);
            System.out.println("3. Evaluación Final: " + nota_evaluacion_final);
            System.out.printf("4. Nota Final Ponderada: %.2f%n", nota_final);
            System.out.println("5. Nivel de Desempeño: " + nivel_desempeno);
            System.out.println("6. Estado Final: " + estado_final);

            //MENSAJES ADICIONALES
            if (nota_final < 7.00){
                System.out.println("Requiere refuerzo academico");
            }
            if (nota_final >= 9.00){
                System.out.println("Felicidades");
            }
    }
    scanner.close();
    
}
}


