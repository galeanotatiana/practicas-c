/*Generar un vector de registros del punto 1 para 20 alumnos, ingresando por teclado los datos e imprimiendo luego en pantalla.*/

#include <stdio.h>

struct alumno {
    int legajo, promedio, ingreso;
    char nombre[20], dni[9];};


void ingresar (struct alumno alu[], int n){
    for (int i = 0; i < n; i++){
        printf("Ingrese el nombre del alumno: \n");
        scanf("%19s", alu[i].nombre);

        printf("\nIngrese el dni del alumno: \n");
        scanf("%8s", alu[i].dni);

        printf("\nIngrese el legajo del alumno: \n");
        scanf("%i", &alu[i].legajo);

        printf("\nIngrese el promedio del alumno: \n");
        scanf("%i", &alu[i].promedio);

        printf("\nIngrese el año de ingreso del alumno: \n");
        scanf("%i", &alu[i].ingreso);};
    }

void imprimir(struct alumno alu[], int n){
    for (int i = 0; i < n; i++){
        printf("\nNombre: %s\nDNI: %s\nLegajo: %i\nPromedio: %i\nAño de ingreso: %i\n", alu[i].nombre, alu[i].dni, alu[i].legajo, alu[i].promedio, alu[i].ingreso);
    }
}

int main(){
    int N = 20;
    struct alumno alu[N];
    ingresar(alu, N);
    imprimir(alu, N);
}