// RECURSIVIDAD: El factorial de un número. Código sacado del libro

// El factorial de un número está dado por N! = N * (N-1) * (N-2) * ... * 1  
//                                         5! = 5 *  4    *  3    * 2   * 1

#include <stdio.h>
int factorial(int n)    // Recibe como parámetro el número del que se quiere calcular el factorial
{
 int r;                // r = Almacena el factorial para retornarlo al final. 
 if(n==0)              // Condición de corte: En cada llamada "n" se va a decrementar en uno. Si se llegó a que (n-1) = 0 
 return(1);            // En vez de 0 va a multiplicar por 1
 else
 r=n*factorial(n-1); // En cada llamada a la función, el número n se reduce uno: n-1. Se hace n * el factorial del anterior.
return(r);           // Al final retorna el factorial, el cual estaba almacenado en r.
}

int main()
{
int n,f;                                   // Se declaran dos variables de enteros: el número y otra para almacenar su factorial
printf("\nIngrese un número: ");           // Pide un número por teclado
scanf("%d",&n);                            // Lo guarda en la dirección de memoria de n
f=factorial(n);                            // Toma "n" como parámetro
printf("El factorial de %d es %d",n,f);
return 0;
}