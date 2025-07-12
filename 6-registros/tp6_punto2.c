#include <stdio.h>

// Generar una función que reciba el registro del punto anterior y devuelva la cantidad de 
// años que pasaron desde que ingresó el alumno. 

struct alumno {
    int legajo;
    int ingreso;
    float promedio;
} alumno_1;

int cuanto_tiempo (struct alumno[]){
    int año_actual = 2024;
    int cant_años = año_actual - alumno_1.ingreso;
    return cant_años;
}