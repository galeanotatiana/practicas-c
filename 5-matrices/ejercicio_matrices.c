// Matriz cuadrada con números aleatorios. Hacer una función "ajedrez" que muestre la matriz en forma de ajedrez,
// con "-1" donde no tenga que aparecer nada.

// Ejemplo: Dada la matriz  | 1 | 2 | 3 | 4 |
//                          | 5 | 6 | 7 | 8 |
//                        | 9 | 10 | 11 | 12|
//                       | 13 | 14 | 15 | 16 | 

// Ejemplo: Tiene que devolver  | 1 | -1 | 3 | -1 |
//                             | -1 | 6 | -1 | 8 |
//                             | 9 | -1 | 11 | -1 |
//                            | -1 | 14 | -1 | 16 | 


// A las filas pares les corresponden las columnas pares, a las columnas impares les corresponden las columnas
// impares. Usar módulo

// Al sumar los subindices, van a dar numeros pares o impares: fila 0 + columna 0 = 0 (par)
// Fila 0 + columna 1 = 1 (impar) etc etc. A los impares se les asigna -1.

// Un for para i (filas) y otro con j (las columnas). 
// Si hago for(i=0;i<N;i+2) va a ser para los pares
// Si hago for(i=1;i<N;i+2) va a ser para los impares.

// M[cant. filas][cant. columnas] y se hacen dos define al principio.

