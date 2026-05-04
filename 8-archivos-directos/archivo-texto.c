#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* demo;
    demo = fopen("demo_file.txt", "w+");
    fprintf(demo, "%s %s %s", "esto", "es", "prog2");
    fclose(demo);
    printf("Archivo creado.");
}