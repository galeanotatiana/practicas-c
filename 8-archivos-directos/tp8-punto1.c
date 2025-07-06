/* Crear un programa que permita almacenar los datos de 10 personas 
(DNI, nombre, sexo, edad) y mediante el ingreso de una posición “I” 
realizar la lectura de dicha posición en el archivo de manera directa. 
El programa debe terminar cuando se ingresa I = -1. */
#include <stdio.h>

typedef struct{
    char dni[10];
    char nombre[15];
    char sexo;
    int edad;
} persona_t;

FILE *f;

void cargar()
{
    persona_t aux;
    char s;
    int num;

    f = fopen("datos.dat","wb");

    for(int i=0; i<3; i++)
    {
        printf("\nIngrese su dni: ");
        fgets(aux.dni,10,stdin);

        printf("\nIngrese su nombre: ");
        fgets(aux.nombre,15,stdin);

        printf("\nIngrese sexo F/M: ");
        scanf("%c",&s);
        aux.sexo = s;

        printf("Ingrese edad: ");
        scanf("%i",&num);
        aux.edad = num;

        fwrite(&aux,sizeof(persona_t),1,f);
    }

    fclose(f);
}


int main()
{
    cargar();

    f = fopen("datos.dat","rb");

    int pos;
    persona_t buffer;

    do
    {
        printf("\nIngrese una posicion: ");
        scanf("%i",&pos);

        fseek(f,pos*sizeof(persona_t),SEEK_SET);

        fread(&buffer,sizeof(persona_t),1,f);

        printf("\tDNI: %s\tNombre: %s\tSexo: %c\tEdad: %i",buffer.dni, buffer.nombre, buffer.sexo, buffer.edad);
    } while (pos != -1);

    fclose(f);

    return 0;
}