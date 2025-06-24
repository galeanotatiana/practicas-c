/* En un archivo secuencial (por ejemplo “lluvias.txt”) se almacenan datos sobre la 
lluvia caída en un cierto período. Cada línea corresponde a un día y contiene los 
siguientes datos: Día-Mes-Anio-Precipitaciones (0 si no llovió)  
Preparar un algoritmo con los procedimientos necesarios para:

Cargar los datos correspondientes a los 30 días del mes de septiembre del corriente año. */
#include <stdio.h>
void cargar_archivo(FILE*f){
    int dia, mm, mes=9, anio=2025;
    for (dia = 1; dia <= 30; dia ++){
        printf("Ingrese las precipitaciones del dia %i de septiembre: ", dia);
        scanf("%i", &mm);
        fprintf(f,"%d-9-2025-%d\n",dia,mm);
    }
}

/*Leer el archivo e informar por pantalla: cuántos días hubo sin lluvias, cuántos
días llovió  menos de 50 mm y cuántos llovió 50 mm ó más.*/
void informe_lluvias(FILE*f){
    int dia, lluvia, mes, anio;          /*Variables*/
    int no_llovio=0, menos_50=0, mas_50=0;     /*Contadores*/
    for (int i=0; i<30; i++){
        fscanf(f,"%d-%d-%d-%d\n", &dia, &mes, &anio, &lluvia);
        if (lluvia==0){
            no_llovio++;
        } else if (lluvia<50){
            menos_50 ++;
        } else
        mas_50 ++;
    }
    printf("Dias sin lluvia: %i\n", no_llovio);
    printf("Dias con lluvia menor a 50mm: %i\n", menos_50);
    printf("Dias con lluvia mayor a 50mm: %i\n", mas_50);
}

int main(){
    FILE *f;
    f = fopen("lluvias.txt", "w");
    if (f==NULL){
        printf("Error al abrir/crear archivo.\n");
        return 1;
    }
    cargar_archivo(f);
    fclose(f);
    f = fopen("lluvias.txt","r");
    if (f==NULL){
        printf("Error al abrir archivo.\n");
        return 1;
    }
    informe_lluvias(f);
    fclose(f);
    return 0;
}
