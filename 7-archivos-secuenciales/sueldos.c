/* Producir un informe con los sueldos de los empleados de una compañía, emitiendo subtotales por departamento y por sucursal. Cada empleado tiene un único registro en el archivo maestro de nómina con los siguientes datos:
• Código de sucursal (cod_suc:entero)
• Código de departamento  (cod_dpto:entero)
• Código de empleado  (cod_emp:entero)
• Sueldo mensual (sueldo:real)
El archivo está ordenado en forma ascendente por código de sucursal y, dentro de sucursal por departamento (Archivo sueldos2.txt)*/

#include <stdio.h>

FILE *f;

int main(){
    float sueldo, total_dpto, total_suc;
    int cod_suc, cod_suc_anterior, cod_dpto, cod_dpto_ant, cod_emp;

    f = fopen("sueldos2.txt", "r");
    fscanf(f, "%i %i %i %f", &cod_suc, &cod_dpto, &cod_emp, &sueldo);

    while(!feof(f)){
        cod_suc_anterior = cod_suc;
        total_suc = 0;
        while(!feof(f) && (cod_suc_anterior == cod_suc)){
            cod_dpto_ant = cod_dpto;
            total_dpto = 0;
            while(!feof(f) && (cod_suc_anterior == cod_suc) && (cod_dpto_ant == cod_dpto)){
                total_dpto += sueldo;
                total_suc += sueldo;
                fscanf(f, "%i %i %i %f", &cod_suc, &cod_dpto, &cod_emp, &sueldo);
            }
            printf("El total de los sueldos del departamento %i de la sucursal %i es: %.2f", cod_dpto_ant, cod_suc_anterior, total_dpto);
        }
        printf("El total de la sucursal %i es: %.2f", cod_suc_anterior, total_suc);
    }

    fclose(f);
    return 0;
}