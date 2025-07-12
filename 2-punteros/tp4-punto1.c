// Crear una función, que reciba dos números enteros como parámetros, calcule el resultado de la suma, 
// el de la resta y el del producto, y asigne dichos cálculos a tres variables pasadas por referencia a 
// la misma función. En caso de finalización exitosa, la función deberá retornar cero. Luego de llamar a la función
// validar que dichas variables hayan sido modificadas.

// Ejemplo: Si la función se llama calculadora, y sean s, r, p, variables de tipo entero, entonces llamando a 
// calculadora(3, 1, &s, &r, &p), deberá suceder que después de la ejecución de la función, s=4, r=2, p=3.

#include <stdio.h> 

int calculadora(int n1, int n2, int *suma, int *resta, int *prod){   // Acá ya están declarados los PUNTEROS
    printf("El primer valor es: %i \n", n1);
    printf("El segundo valor es: %i \n", n2);

    *suma = n1 + n2; // "suma" ya lo declaré como puntero antes, entonces no hace falta ponerle el *
    printf("El resultado de la suma es: %i \n", *suma);

    *resta = n1 - n2;
    printf("El resultado de la resta es: %i \n", *resta);

    *prod = n1 * n2;
    printf("El resultado del producto es: %i \n", *prod);

    return 0;
}

int main(){
    int suma, resta, prod;
    calculadora(5, 4, &suma, &resta, &prod);
    return 0;
}
