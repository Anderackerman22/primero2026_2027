#include <stdio.h>

int main(){
    //constantes y variables 
    float monto_dolares;
    const float usd_eur = 0.92;
    const float usd_mxn = 17.50; 
    const float usd_pen = 3.75;

    //ingreso de datos por el usuario

    printf("Por favor, ingrese el monto en dolares: \n");
    scanf("%f", &monto_dolares);

    //expresion logica

    if (monto_dolares > 0 && monto_dolares <= 10000){

         //operaciones

         float monto_en_euros = monto_dolares * usd_eur;
         float monto_en_pesos = monto_dolares * usd_mxn;
         float monto_en_soles = monto_dolares * usd_pen;

         // adicional: mitad de los resultados obtenidos

         float mitad_monto_euros = monto_en_euros / 2.0;
         float mitad_monto_pesos = monto_en_pesos / 2.0; 
         float mitad_monto_soles = monto_en_soles / 2.0; 
         
         //salida de los resultados 
         
         printf( "\n --RESULTADOS-- \n");
         printf("El monto en euros es %.2f (mitad: %.2f) \n", monto_en_euros, mitad_monto_euros);
         printf("El monto en pesos es %.2f (mitad: %.2f) \n", monto_en_pesos, mitad_monto_pesos);
         printf("El monto en soles es %.2f (mitad: %.2f) \n", monto_en_soles, mitad_monto_soles);
         printf("El monto es valido \n");

    } else{
        printf("Error: El monto esta fuera del rango \n");
    }
    return 0;   
}