#include <stdio.h>
#include <math.h>

int main() {
    // constantes y variables
    const int DIVISOR = 5;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int suma = 0;
    double promedio = 0.0;
    double diferencia_abs = 0.0;
    int es_positiva = 0;

    //Lectura de los 5 números enteros por teclado
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &num3);

    printf("Ingrese el cuarto numero entero: ");
    scanf("%d", &num4);

    printf("Ingrese el quinto numero entero: ");
    scanf("%d", &num5);

    //Cálculos aritméticos y evaluaciones relacionales
    suma = num1 + num2 + num3 + num4 + num5;
    promedio = (double)suma / DIVISOR; // Conversión explícita a double
    es_positiva = (suma > 0);
    diferencia_abs = fabs(suma - promedio); // Valor absoluto de la diferencia

    //Identificación de tipos de datos
    printf("     IDENTIFICACION DE TIPOS DE DATOS   \n");
    printf("Variables num1..num5  -> Tipo: Entero (int)\n");
    printf("Variable suma         -> Tipo: Entero (int)\n");
    printf("Variable promedio     -> Tipo: Real (double)\n");
    printf("Variable es_positiva  -> Tipo: Booleano / Entero (bool/int)\n");
    printf("Variable diferencia_abs -> Tipo: Real (double)\n");

    // Salida por pantalla: Resultados
    printf("         RESULTADOS OBTENIDOS           \n");
    printf("Suma Total            : %d\n", suma);
    printf("Promedio (dividido 5) : %.2f\n", promedio);
    printf("¿Suma > 0?            : %s\n", es_positiva ? "VERDADERO" : "FALSO");
    printf("|Suma - Promedio|     : %.2f\n", diferencia_abs);

    // Mensaje de confirmación final
    printf("CONFIRMACION: Operacion realizada con exito.\n");
    
    return 0;
}