#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *f;

int main()
{
    char buffer[30];
    f = fopen("text.txt","w");
    printf("Ingrese una cadena de texto\n");
    for(int i=0; i<5; i++)
    {
        fflush(stdin);
        fgets(buffer,sizeof(buffer),stdin);
        fputs(buffer,f);
    }
    fclose(f);

    f = fopen("texto.txt","r");

    while(!feof(f))
    {
        fgets(buffer,sizeof(buffer),f);
        printf("\n%s",buffer);
    }

    fclose(f);

    return 0;
}
