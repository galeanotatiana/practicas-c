/*Crear un archivo de texto "texto.txt" en modo escritura e ingresar caracteres
de a uno de forma secuencial, finalizando el ingreso con el caracter "$"*/
#include <stdio.h>
int main(){
    FILE *f = fopen("texto.txt", "w");
    char car;
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    car = getchar(); /*Lee caracter del teclado*/
    while (car != '$'){
        putc(car, f); /*Envia el caracter al archivo*/
        car = getchar();
    }
    fclose(f);
    return 0;
}