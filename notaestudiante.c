#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

//variables y constantes 
const double nota_min = 7.0;
char nombre[50];
float nota1, nota2, nota3, promedio, coseno_res;
bool aprobo;

int main(){
    printf(" TIPO DE OPERACION: Evaluacion Academica\n");
    printf("Ingrese el nombre del estudiante:\n");
    scanf(" %s", &nombre);
    printf("Ingrese la primera nota\n");
    scanf(" %f", &nota1);
    printf("Ingrese la segunda nota\n");
    scanf(" %f", &nota2);
    printf("Ingrese la tercera nota\n");
    scanf(" %f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3.0;
    aprobo = (promedio >= nota_min);
    coseno_res = cos(promedio);

    printf("     RESULTADO FINAL   \n");
    printf("Estudiante: %s\n", nombre);
    printf("Promedio: %.2f\n", promedio);

    if (aprobo) {
        printf("FELICIDADES USTED HA APROBADO (Supero la nota minima)\n", nota_min);
    } 
    else {
        printf("Reprobado (No alcanzo la nota minima de \n)", nota_min);
    }

    printf("\nCoseno del promedio (requisito extra): %.4f\n", coseno_res);

    return 0;

}