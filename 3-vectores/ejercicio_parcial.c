/*Escribir un programa que permita guardar los seguidores de 100 usuarios de instagram
en un vector: el programa deberá contar con una función que permita cargar la cantidad de seguidores,
la cual varia entre 100 y 20.000 (VALIDAR)
Se solicita desarrollar otra función que retorne el índice del usuario que posee la mayor cantidad
de seguidores y la cantidad de seguidores correspondiente.*/

#include <stdio.h>
#define N 100 
void cargar_seguidores(int SEGUIDORES[N], int min, int max){
    /*Se pide el dato por teclado*/
    int auxiliar;
    for (int i=0; i<N; i++){
    do {
        printf("Ingrese la cantidad de seguidores del usuario %i: ", i+1);
        scanf("%i", &auxiliar);

        /*Se valida el dato*/
        if (auxiliar < min || auxiliar > max){
            printf("Error, el valor ingresado debe estar entre %i y %i.", min, max);
        }
    } while (auxiliar < min || auxiliar > max); /*Se ejecuta hasta que se ingrese un número en el rango válido*/
    
    /*Una vez validado el dato, se agrega al vector*/
    SEGUIDORES[i] = auxiliar;    
}
}

int mayor_cantidad(int SEGUIDORES[N]){
    int mayor=-100, i=0, pos=0;         /*Se inicializa "mayor" con un valor absurdo*/
    for (i=0; i<N; i++){                /*Se recorre todo el vector*/
        if (SEGUIDORES[i] > mayor){    /*Si el elemento actual es mayor a la variable "mayor"...*/
            mayor = SEGUIDORES[i];     
            pos = i;
        }
    }
    printf("El usuario %i tiene la mayor cantidad de seguidores: %i", mayor, pos);
    return pos; 
}

int main(){
    int SEGUIDORES[N] = {0};
    int min = 100, max = 20000;
    cargar_seguidores(SEGUIDORES, min, max);
    mayor_cantidad(SEGUIDORES);
    return 0;
}