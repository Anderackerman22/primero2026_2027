#include<stdio.h>

int main(){

    //variables y cosntantes 
    float ingreso_mensual = 0.0;
    float gastos = 0.0;
    float monto_solicitado = 0.0;
    int plazo_meses = 0;

    const int ingreso_min = 800;
    const double porcentaje_max = 0.30;
    const double tasa_interes = 0.18;

    //datos ingresados por el usuario 

    printf("Escriba el ingreso mensual \n");
    scanf("%f", &ingreso_mensual);
    printf("Escriba los gastos \n");
    scanf("%f", &gastos);
    printf("Escriba el monto solicitado \n");
    scanf("%f", &monto_solicitado);
    printf("Escriba el plazo en meses \n");
    scanf("%d", &plazo_meses);

    //operaciones

    float ingreso_neto = ingreso_mensual - gastos;
    float capacidad_pago = ingreso_neto * porcentaje_max;
    float pago_mensual = (monto_solicitado * (1 + tasa_interes)) / plazo_meses;
    float mitad_resultado = pago_mensual / 2;

    printf("El ingreso neto es %.2f \n", ingreso_neto );
    printf("La capacidad de pago es %.2f \n", capacidad_pago);
    printf("El pago mensual es %.2f (mitad: %.2f) \n", pago_mensual, mitad_resultado);
    

    //expresion logica

    if(ingreso_mensual >= ingreso_min && pago_mensual <= capacidad_pago){

        printf("Credito aprobado \n");

    }else{
        printf("Credito denegado \n");
    }
    
    return 0;
}