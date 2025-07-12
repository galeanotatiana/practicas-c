// RECURSIVIDAD: Sumatoria de números. Código sacado del libro

#include <stdio.h>
int sumatoria(int n)
{
int s;
if(n==1)
 return(1);
else
 s=n+sumatoria(n-1); // A medida que se va llamando a la función sumatoria el número n se va decrementando en 1 con n-1
return(s); 
}

int main()
{
    int n,sum;
    printf("\nIngrese un número: ");
    scanf("%d",&n);
    sum=sumatoria(n);
    printf("La sumatoria de %d es %d", n, sum);
    return 0;
}
