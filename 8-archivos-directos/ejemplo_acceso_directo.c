#include <stdio.h>
#include <ctype.h> /*Para convertir a mayusculas*/

/*El programa lee un archivo de texto caracter por caracter, y lo convierte a mayusculas.
Cuando lee un caracter, el puntero a registro avanza automaticamente a la posicion siguiente; asi, antes de escribir
el caracter en mayusculas es preciso retroceder el puntero a registro un posicion. Por ultimo, se lleva el puntero
al inicio, y se muestra el contenido del archivo por la salida estandar.*/

// Crear el archivo de texto
int main(){
    char aux[100];
    FILE *f = fopen("accdir.txt", "w");
    if (f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    printf("Ingrese una cadena de texto: ");
    fgets(aux, 100, stdin); // stdin es la entrada estandar: el teclado
    fprintf(f, "%s", aux);
    fclose(f);

    char car;
// Se abre el archivo para lectura y escritura
    f = fopen("accdir.txt", "r+");
    if (f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    while ((car = getc(f)) != EOF){  //Se lee todo el archivo
        car = toupper(car);         // Se convierte el caracter a mayusculas
        fseek(f, -1, SEEK_CUR);     
        putc(car, f); // Se escribe el caracter en mayusculas. Esta escritura también avanza el puntero.
    }

    fseek(f, 0, SEEK_SET); // Se lleva el puntero a la primera posicion

    while ((car = getc(f)) != EOF){ // Se lee todo el archivo
        printf("%c", car);         // Se lo muestra en pantalla
    }
    printf("\n");
    fclose(f);
    return 0;
}