/* Generar un registro para la ficha de un alumno de la universidad con los siguientes campos e imprimir los resultados:
Número de legajo
Nota promedio
Año de ingreso
*/

/*Generar una función que reciba el 
registro del punto anterior y devuelva la cantidad de años que pasaron desde que ingresó el alumno.*/

#include <stdio.h>
struct alumno{
    int legajo, promedio, ingreso;
};

    int anios(struct alumno alum){
        int actual = 2025;
        int resta = actual - alum.ingreso;
        printf("\n Pasaron %i años desde el ingreso.", resta);
        return resta;
    };


int main(){
    struct alumno alum = {
        .legajo = 196677,
        .promedio = 4,
        .ingreso = 2023,
    };
    printf("El legajo es: %i, el promedio es: %i y el año de ingreso fue %i.", alum.legajo, alum.promedio, alum.ingreso);
    anios(alum);
    return 0;
}


