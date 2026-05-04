#include <stdio.h>
#include <string.h>

int main(){
    char cadena[] = ",,Hola,mundo,soy,una,cadena,separada,por,comas";
    int longitud = strlen(cadena);

    char delimitador[] = ",";
    char *token = strtok(cadena, delimitador);
    while(token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimitador);
    }
    //Así queda la cadena luego del split. Por qué?
    printf("cadena luego del split: %s\n", cadena);
    
   //Así queda el área de memoria ocupado originalmente por cadena[]
    printf("Area de memoria: \n");
    for(int i=0;i<longitud;i++){
        printf("cadena[%d]: '%c' - %d\n", i, cadena[i], cadena[i]);     
    }
    
    char c = getchar();
}


/*
Detalles sobre strtok:
* Destruye el string
* Ignora los delimitadores iniciales de la cadena.
* Coloca \0 en lugar del delimitador que va encontrando.

 * * Probar delimitador: ",,".
 * * Probar delimitador: ",s". Qué se observa?
*/