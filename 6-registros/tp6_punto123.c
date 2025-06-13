#include <stdio.h>
#include <string.h>

/* Generar un registro para la ficha de un alumno de la universidad con los siguientes campos e imprimir
los resultados:
Número de legajo
Nota promedio
Año de ingreso
*/

struct alumno{
    char legajo[7]; /*Lo almaceno como string porque no se van a hacer operaciones con el legajo*/
    float promedio;
    int ingreso;
} alumno_1;         /*Declaro una variable tipo alumno llamada alumno_1*/

/*Generar una función que reciba el registro del punto anterior 
y devuelva la cantidad de años que pasaron desde que ingresó el alumno.*/
int tiempo(int ingreso){
    int actual = 2025;
    int cuanto_tiempo = actual - ingreso;
    printf("Pasaron %i años desde el ingreso del alumno.\n", cuanto_tiempo);
    return cuanto_tiempo;
}

/*Generar un vector de registros del punto 1 para 20 alumnos,
ingresando por teclado los datos e imprimiendo luego en pantalla.*/
void ingresar_imprimir(struct alumno alum[], int cantidad){
    /*Diferencia importante: "alumno" es el tipo de dato, "alum" es el nombre de un vector de estructuras*/
    char leg[7];
    /*Ingreso de datos*/
    for (int i=0;i<cantidad;i++){
        printf("Ingrese el legajo del alumno %i: ", i+1);
        scanf("%s", &leg);
        strcpy(alum[i].legajo, leg);
        printf("\nIngrese la nota promedio del alumno %i: ", i+1);
        scanf("%f", &alum[i].promedio);
        printf("\nIngrese el año de ingreso del alumno %i: ", i+1);
        scanf("%i", &alum[i].ingreso);
    }
    /*Imprimir datos*/
    for (int i=0; i<cantidad; i++){
        printf("\nEl legajo del alumno %i es: %s \n", i+1, alum[i].legajo);
        printf("La nota promedio del alumno %i es: %.2f \n", i+1, alum[i].promedio);
        printf("El año de ingreso del alumno %i es: %i \n", i+1, alum[i].ingreso);
    }
}

int main(){
    strcpy(alumno_1.legajo, "4845");
    alumno_1.promedio = 7.34;
    alumno_1.ingreso = 2020;
    printf("El legajo del alumno es: %s, el año de ingreso fue %i y su nota promedio es %.2f.\n", alumno_1.legajo, alumno_1.ingreso, alumno_1.promedio);
    tiempo(alumno_1.ingreso);
    struct alumno alum[20];
    ingresar_imprimir(alum, 20);
    return 0;
}