/*Crear una función que reciba como argumento un texto, y una variable 
extra que se complete con la cantidad de palabras. Que retorne cuántas 
letras tiene el texto. Además, la función debe almacenar la cantidad de 
palabras en el texto*/

#include <stdio.h>
#include <string.h>

int f_texto(char texto[], int *cant_palabras){
    int cant_letras = 0;
    /*Cuento la cantidad de letras*/
    for (int i=0; texto[i] != '\0'; i++){
        if (texto[i]!= ' ' && texto[i]!='\n' && texto[i]!='\0'){
            cant_letras++;
        }
    }
    

    /*Cuento cantidad de palabras contando los espacios (en el main el contador inicia en 1)*/
    for (int i=0; i<cant_letras; i++){
        if (texto[i] != '\0'){
            if (texto[i] == ' '){
                (*cant_palabras)++;
            }
        }
    }
    printf("La cantidad de palabras es: %i \n", *cant_palabras);
    printf("La cantidad de letras es %i", cant_letras);
    return cant_letras;
}

int main(){
    int cant_palabras = 1;
    char texto[60];
    printf("Ingresa un texto:");
    fgets(texto, sizeof(texto), stdin); /*donde se guarda el texto, la cantidad de caracteres y el origen (teclado, standard input)*/
    f_texto(texto, &cant_palabras); 
    return 0;
}