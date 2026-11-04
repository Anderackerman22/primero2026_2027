#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

//variables y datos
int segundos; 
int h;
int m;
int s;

double inv_h = 0.0;

int main(){
    printf("Ingrese la cantidad de segundos:");
    scanf("%d", &segundos);

    h = segundos / 3600;
    m = (segundos % 3600) / 60;
    s = segundos % 60;

    printf("\n%d horas, %d minutos y %d segundos\n", h, m, s);

    printf("\n   IDENTIFICACION DE TIPOS DE DATO   \n");
    printf("segundos -> Entero (int)\n");
    printf("h -> Entero (int)\n");
    printf("m -> Entero (int)\n");
    printf("s -> Entero (int)\n");

    if (h != 0){
        inv_h = 1.0 / h;
    }

    printf("\n   Valores de las variables auxiliares  \n");
    printf("h = %d\n",h);
    printf("m = %d\n", m);
    printf("s = %d\n", s);

    if (h != 0){
        printf("Inverso multiplicativo de h = %.4f (Tipo: double/Real)\n", inv_h);

    }else{ 
        printf("Inverso de h: No definido (h es 0)\n");

    }

    return 0;

}