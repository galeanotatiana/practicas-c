#include <stdio.h>
#include <string.h>
int main(){
    char aux[100];

    FILE *f = fopen("ejemplo.txt", "r");
    if (f==NULL){
        perror("No se ha podido abrir el archivo.\n");
        return 1;
    }

    while (!feof(f)){
        fgets(aux,100,f);
        printf("%s", aux);
    }
    fclose(f);
    printf("\n");
    return 0;
}