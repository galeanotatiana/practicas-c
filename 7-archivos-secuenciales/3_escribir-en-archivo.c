#include <stdio.h>
// Pedir un numero por teclado y guardarlo en un archivo de texto
int main(){
    int num;
    FILE *f;

    f = fopen("prueba3.txt", "w");
    if (f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    printf("Ingresa un numero: ");
    scanf("%i", &num);
    fprintf(f, "El numero ingresado fue: %i\n", num);

    fclose(f);
    return 0;
}