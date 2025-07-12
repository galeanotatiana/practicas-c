// REGISTROS (ejemplo sacado de libro)

// el siguiente es un algoritmo de ejemplo para ingresar registros de 5 empleaados: (n.º de legajo, edad, sueldo y categoría), y 
// luego muestra por pantalla el registro en una línea

#include <stdio.h>
#define N 5
int main()
{
struct miestructura
 {
    int legajo,edad;
    float sueldo;
    char categoría;};
    struct miestructura empleado [N];
    int i;
for(i=0;i<N;i++)
{
    printf("\nIngresar nº de legajo ");
    scanf("%i",& empleado [i].legajo);
    printf("\nIngresar edad: ");
    scanf("%i",& empleado [i].edad);
    printf("\nIngresar sueldo: ");
    scanf("%f",& empleado [i].sueldo);
    while(getchar()!='\n');
    printf("\nIngresar categoría ");
    scanf("%c",& empleado [i].categoría);
}

printf("\nDatos de los empleados:\n");
for(i=0;i<N;i++)
 printf("\nLegajo %i, edad %i, categoría %c y sueldo %f\n", empleado[i].legajo, empleado[i].edad, empleado[i].categoría, empleado[i].sueldo);
return 0;
}
