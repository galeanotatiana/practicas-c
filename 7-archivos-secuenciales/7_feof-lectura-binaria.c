/*Utilizar la macro feof() "find end of file" en la lectura de un archivo binario.
El archivo binario ya fue creado previamente. */
#include <stdio.h>
int main(){
    FILE *f = fopen("binario.bat", "rb");
    char car;
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    car = getc(f); /*Lee caracteres del archivo*/
    while(!feof(f)){ /*Continua el ciclo mientras feof(f)==0*/
        printf("%c", car); /*Imprime caracter en pantalla*/
        car = getc(f);
    }
    fclose(f);
    return 0;
}