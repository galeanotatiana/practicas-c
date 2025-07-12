// En una entidad bancaria se dispone de un archivo de transacciones, ordenado por Número de cuenta, con los clientes que han tenido movimiento en sus cuentas (puede haber más de un movimiento por cuenta). El registro está compuesto por:
// Nro. de cuenta (n_cuenta:entero)
/* Movimiento(codi:entero)
Importe (importe:real)

Donde codi puede tomar los siguientes valores: 1 si es un depósito, 2 si es una
extracción. Cada registro representa un movimiento y contiene el importe de la misma. Realizar un programa que imprima un listado con todos los clientes que hayan tenido movimientos en sus cuentas y el saldo neto de dichos movimientos. (Archivo movimientos.txt) */

#include <stdio.h>

FILE *f;

int main(){
    int n_cuenta, nro_cuenta_aux, codi;
    float importe, acumulador;

    f = fopen("movimientos.txt", "r");
    fscanf(f, "%i - %i - %f", &n_cuenta, &codi, &importe);
    while(!feof(f)){
        acumulador = 0;
        nro_cuenta_aux = n_cuenta;
        while(!feof(f) && (nro_cuenta_aux == n_cuenta)){
            if (codi == 1){
                acumulador += importe;
            }
            if (codi == 2){
                acumulador -= importe;
            }
            fscanf(f, "%i - %i - %f", &n_cuenta, &codi, &importe);
        }
        printf("Saldo neto del cliente nro %i: %.2f", nro_cuenta_aux, acumulador);
    }
    fclose(f);
    return 0;
}