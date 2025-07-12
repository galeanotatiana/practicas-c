// Escribir una función que procese las notas de los dos parciales de un alumno inscriptos en Programación 1.
// La función recibe las dos notas, y un parámetro donde se almacenará la condición del alumno. Además, 
// la función debe retornar la nota promedio del alumno.

#include <stdio.h>
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

int main(){
    float nota1 = 7.5;
    float nota2 = 5.0;
    char cond;

    int promedio = promedio_condicion(nota1, nota2, &cond);
    printf("%i \n", promedio);
    return 0;
}