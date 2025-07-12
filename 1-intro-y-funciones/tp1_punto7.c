#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int promedio_condicion(int parcial1, int parcial2, char *cond){
    int promedio;
    promedio = (parcial1 + parcial2) / 2;
    cond = "Libre";
    if (parcial1 >= 4 && parcial2 >= 4 && promedio >= 7){
        cond = "Promovido";
    } else if (parcial1 >= 4 && parcial2 >= 4){
        cond = "Regular";
    }
    return promedio;
}

// Escribir un programa principal que llame a la función anterior, para un curso de n alumnos inscriptos en la materia, 
// y muestre por pantalla el promedio del curso. Las notas de los alumnos en los parciales deben ser enteros 
// entre 0 y 10 generados en forma aleatoria en el programa principal.

int main() {
    int alumnos = 105;
    srand(time(NULL));
    int total_promedio = 0; // Acumulador para el promedio total
    char condicion[10]; // Para almacenar la condición de cada alumno

    for (int i = 0; i < alumnos; i++) {
        int nota1 = rand() % 10+1; // Nota del primer parcial entre 1 y 10
        int nota2 = rand() % 10+1; // Nota del segundo parcial entre 1 y 10

        // Obtener el promedio y la condición
        int promedio = promedio_condicion(nota1, nota2, condicion);
        
        // Si se quisiera mostrar por pantalla la condición de cada alumno:
        // printf("Alumno %d - Parcial 1: %d, Parcial 2: %d, Promedio: %d, Condición: %s\n", 
                // i + 1, nota1, nota2, promedio, condicion);
        
        total_promedio += promedio; // Acumular el promedio
    }

    // Calcular el promedio del curso
    float promedio_curso = (float)total_promedio / alumnos;
    printf("El promedio del curso es: %.2f\n", promedio_curso);

    return 0;
}