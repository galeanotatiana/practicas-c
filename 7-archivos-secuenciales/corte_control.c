#include <stdio.h>

// Producir un reporte con los sueldos de los empleados de una compañía, emitiendo totales por sucursal. 
// Cada empleado tiene un único registro en el archivo maestro de nómina con los siguientes datos:
// Código de sucursal (cod_suc: entero)
// Código de empleado (cod_emp: entero)
// Sueldo mensual(sueldo:real)
// El archivo está ordenado en forma ascendente por código de sucursal (Archivo sueldos.txt)

FILE *f;
int main(){
    int sucursal, suc_anterior, cod_emp;
    float sueldo, acumulador, ac_total = 0;

    f = fopen("sueldos.txt", "r");
    fscanf(f, "%i %i %.2f", &sucursal, &cod_emp, &sueldo);
    while(!feof(f)){
        suc_anterior = sucursal;
        acumulador = 0;
        while(!feof(f) && (sucursal == suc_anterior)){
            acumulador += sueldo;
            ac_total += sueldo;
            fscanf(f, "%i %i %.2f", &sucursal, &cod_emp, &sueldo);
        }
        printf("Total de la sucursal %i: %.2f \n", suc_anterior, acumulador);
    }
    printf("Total de todas las sucursales: %.2f ", ac_total);
    fclose(f);
    return 0;
}



