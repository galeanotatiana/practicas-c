/* Crear un programa que permita almacenar los datos de 3 personas 
(DNI, nombre, sexo, edad) y mediante el ingreso de una posición “I” 
realizar la lectura de dicha posición en el archivo de manera directa. 
El programa debe terminar cuando se ingresa I = -1. */
#include <stdio.h>
#define N 3

struct persona{
    char dni[10];
    char nombre[15];
    char sexo;
    int edad;
} persona_t;

FILE *f;

void cargar()
{
    struct persona aux;
    char s;
    int num;

    f = fopen("datos.dat","wb");

    for(int i=0; i<N; i++)
    {
        printf("Ingrese su dni: ");
        fgets(aux.dni,10,stdin);

        printf("\nIngrese su nombre: ");
        fgets(aux.nombre,15,stdin);

        printf("\nIngrese sexo F/M: ");
        scanf("%c",&s);
        getchar();
        aux.sexo = s;

        printf("\nIngrese edad: ");
        scanf("%i",&num);
        getchar();
        aux.edad = num;

        fwrite(&aux,sizeof(persona_t),1,f);
    }

    fclose(f);
}

/*Para el archivo creado en el punto anterior, crear una función que reciba una posición
y datos de una persona, y reemplace en la fila indicada en la posición los nuevos datos. */
void reemplazar(const char* archivo){
    FILE *f = fopen(archivo, "rb+");
    struct persona auxiliar;
    int pos, num;
    char s;

    do {
    printf("Ingrese una posición (1 a %i): ", N);
    scanf("%i", &pos);
    } while (pos < 1 || pos > N);
    fseek(f, ((pos-1)*sizeof(auxiliar)), SEEK_SET); //Posiciono el cursor en la posicion pedida

    printf("\nIngrese su dni: ");
    fgets(auxiliar.dni,10,stdin);
    printf("\nIngrese su nombre: ");
    fgets(auxiliar.nombre,15,stdin);
    printf("\nIngrese sexo F/M: ");
    scanf("%c",&s);
    getchar();
    auxiliar.sexo = s;
    printf("Ingrese edad: ");
    scanf("%i",&num);
    getchar();
    auxiliar.edad = num;

    fwrite(&auxiliar,sizeof(auxiliar),1,f);
    fclose(f);
}


int main()
{
    cargar();

    f = fopen("datos.dat","rb");

    int pos;
    struct persona buffer;

    printf("\nIngrese una posicion a leer (1 a %d, -1 para salir): ", N);
    scanf("%i", &pos);

    while (pos != -1){
        if (pos >= 1 && pos <= N) {
            fseek(f, (pos - 1) * sizeof(persona_t), SEEK_SET);
            fread(&buffer, sizeof(persona_t), 1, f);
            printf("\tDNI: %s\tNombre: %s\tSexo: %c\tEdad: %i\n", buffer.dni, buffer.nombre, buffer.sexo, buffer.edad);
    } else {
        printf("Posición inválida. Ingrese entre 1 y %i\n", N);
    }

    printf("\nIngrese una posicion a leer (1 a %i, -1 para salir): ", N);
    scanf("%i", &pos);
}
    reemplazar("datos.dat");

    fclose(f);

    return 0;
}