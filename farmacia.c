#include <stdio.h>
#include <string.h>

int main() {
    //Constantes y Variables
    const int MES_MIN = 1;
    const int MES_MAX = 12;
    const int FACTOR_DOBLE = 2;
    int num_mes = 0;
    int doble_mes = 0;
    int es_valido = 0;
    char nombre_mes[20] = "";

    printf("Ingrese el numero de mes (1 a 12): ");
    scanf("%d", &num_mes);

    // Evaluación de la expresión lógica (num_mes >= 1 && num_mes <= 12)
    es_valido = (num_mes >= MES_MIN && num_mes <= MES_MAX);

    if (es_valido) {
        switch (num_mes) {
            case 1:  strcpy(nombre_mes, "Enero"); break;
            case 2:  strcpy(nombre_mes, "Febrero"); break;
            case 3:  strcpy(nombre_mes, "Marzo"); break;
            case 4:  strcpy(nombre_mes, "Abril"); break;
            case 5:  strcpy(nombre_mes, "Mayo"); break;
            case 6:  strcpy(nombre_mes, "Junio"); break;
            case 7:  strcpy(nombre_mes, "Julio"); break;
            case 8:  strcpy(nombre_mes, "Agosto"); break;
            case 9:  strcpy(nombre_mes, "Septiembre"); break;
            case 10: strcpy(nombre_mes, "Octubre"); break;
            case 11: strcpy(nombre_mes, "Noviembre"); break;
            case 12: strcpy(nombre_mes, "Diciembre"); break;
        }

        // Cálculo del doble del resultado
        doble_mes = num_mes * FACTOR_DOBLE;

        printf("       DETALLE DE MES - FARMACIA         \n");
        printf("Numero de Mes ingresado : %d\n", num_mes);
        printf("Nombre del Mes          : %s\n", nombre_mes);
        printf("Doble del valor num.    : %d\n", doble_mes);
    } else {
        printf("               ERROR                     \n");
        printf("Error: Numero %d fuera de rango (1 a 12).\n", num_mes);
    }

    // Mensaje de confirmación al finalizar
    printf("CONFIRMACION: Operacion finalizada correctamente.\n");
    
    return 0;
}