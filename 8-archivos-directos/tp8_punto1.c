#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        fflush(stdin);
        getchar();

        printf("\nIngrese su dni, nombre, sexo y edad.\n");
        fgets(aux.dni,10,stdin);

        fgets(aux.nombre,15,stdin);

        scanf("%c",&s);
        aux.sexo = s;

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
        printf("\nIngrese un posicion: ");
        scanf("%i",&pos);

        fseek(f,pos*sizeof(persona_t),SEEK_SET);

        fread(&buffer,sizeof(persona_t),1,f);

        printf("\tDNI: %s\tNombre: %s\tSexo: %c\tEdad: %i",buffer.dni, buffer.nombre, buffer.sexo, buffer.edad);
    } while (pos != -1);

    fclose(f);

    return 0;
}