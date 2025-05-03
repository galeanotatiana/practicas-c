/*Escribir una función que procese las notas de los dos parciales de un 
alumno inscriptos en Programación 1. La función recibe las dos notas, y un 
parámetro donde se almacenará la condición del alumno. Además, la 
función debe retornar la nota promedio del alumno. Escribir un programa principal que llame a
la función anterior, para un curso de n alumnos inscriptos en la materia, y muestre por pantalla el 
promedio del curso. Las notas de los alumnos en los parciales deben ser enteros entre 0 y 10
generados en forma aleatoria en el programa principal. */

#include <stdio.h>
#include <time.h>

int nota_promedio(int nota1, int nota2, char condicion){
    int promedio = (nota1 + nota2) / 2;
    return promedio;
}

int main(){
    time(set(NULL));
    srand();
}