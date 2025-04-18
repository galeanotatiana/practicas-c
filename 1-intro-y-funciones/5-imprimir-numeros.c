/*Realizar un algoritmo que 
produzca por pantalla lo siguiente: 
1 → 100 110 120 130 140 150
 2 → 100 110 120 130 140 150
 3 → 100 110 120 130 140 150
 4 → 100 110 120 130 140 150
 5 → 100 110 120 130 140 150
 6 → 100 110 120 130 140 150
 7 → 100 110 120 130 140 150
 8 → 100 110 120 130 140 150
 9 → 100 110 120 130 140 150
 10 → 100 110 120 130 140 150*/

 #include <stdio.h>
 int main(){
    int i, j;
    for (i=1; i <= 10; i++){
        printf("%i ---> ", i);
        for (j=100; j<=150; j=j+10){
            printf("%i ", j);
        }
        printf("\n");
    }
    return 0;
 }