/*Crear una función que reciba como argumento un texto, y una variable 
extra que se complete con la cantidad de palabras. Que retorne cuántas 
letras tiene el texto. Además, la función debe almacenar la cantidad de 
palabras en el texto*/

#include <stdio.h>
#include <string.h>

int f_texto(char texto[], int *cant_palabras){
    /*Para calcular la cantidad de caracteres, uso strlen.
    Para calcular la cantidad de palabras, cuento los espacios con un for.*/
    int cant_letras = strlen(texto);
    for (int i=0; i<cant_letras; i++){
        if (texto[i] != '\0'){
            if (texto[i] == ' '){
                cant_palabras ++;
            }
        }
    }
    return cant_letras;
}

int main(){
    int cant_palabras = 0;
    char texto[60];
    printf("Ingresa un texto: ");
    fgets(texto, sizeof(texto), stdin); /*donde se guarda el texto, la cantidad de caracteres y el origen (teclado, standard input)*/
    f_texto(texto, &cant_palabras); 
    return 0;
}