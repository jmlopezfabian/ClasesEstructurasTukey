// m filas
// n columnas
// O(m * n)

//Encontrar la posicion a la derecha al buscar un cero
//En esa posicion inician los negativos

//Podemos usar linear search
    //TC: O(m * n)
    //SC: O(1)

//Usando binary search
    //TC: O(m * log(n))
    //SC: O(1)

//El arreglo esta en forma desc
//Como el arr esta en forma desc usamos upperbound para encontrar
//el elemento a la dercha en lugar de lowerbound

//Tenido el indice de donde los inician los negativos la cantidad
//de negativos en un arreglo va a ser:
// n - upperbound
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    
}
