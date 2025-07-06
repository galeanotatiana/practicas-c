/* Dado el punto anterior, agregar los siguientes algoritmos:
Un algoritmo que permita leer todas las cadenas almacenadas en el mismo archivo 
empleando getc().
Un algoritmo que permita leer todas las cadenas almacenadas en el mismo archivo
empleando fgets() */
#include <stdio.h>
int main(){
    /*getc*/
    FILE *f = fopen("cadenas.txt","r");
    char car;
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    while ((car=getc(f))!=EOF){
        printf("%c", car);
    }
    fclose(f);

    /*fgets*/
    f = fopen("cadenas.txt","r"); /*No se vuelve a definir el puntero a FILE*/
    char aux[100];
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    while (fgets(aux,100,f)!=NULL){
        printf("%s",aux);
    }
    /*Hago el comentario solo para probar el commit*/
    fclose(f);
    return 0;
}