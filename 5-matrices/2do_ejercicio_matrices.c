// matriz de n x m, no necesariamente n x n, generar una segunda matriz de igual dimensión en la que cada elemento
// sea la suma de sus elementos vecinos. El mismo elemento no cuenta en la suma. En una matriz de 4x4, cada elemento
// de la segunda matriz será la suma de los 8 números vecinos que tenga cada uno.

// Considerar el operando %


// N = 10
// i = (i+1) % N
// i = (9 + 1 ) % N = 0

// MI[i][(j+1)%M]
// ej =  (3+1)%4 = 0

// En j no hay que pasarse de las filas, en i no hay que pasarse de las columnas 

// Para ir hacia adelante / sumar para la derecha: (i+1)%N
// Para ir para atrás / sumar hacia la izquierda: (i+1+N)%N
