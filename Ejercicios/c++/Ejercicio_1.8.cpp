//Ejercicio 1.8 
//Piénsese en un arreglo de enteros bidimensional de tamaño n X m que vaya a utilizarse en el lenguaje de programación preferido.
#include "iostream"
#include <vector>

int main()
{
    int n = 8;
    int m = 9;

    // Declara e inicializa un arreglo bidimensional de enteros n x m
    std::vector<std::vector<int>> arregloBidimensional(n, std::vector<int>(m, 0));

    // Inicializacion de los valores en el arreglo
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            arregloBidimensional[i][j] = i * m * j; // Valor creciente para cada celda
        }
    }

    // Acceso y manipulacion de los valores del arreglo
    //int valor = arregloBidimensional[1][2]; // Accede a la fila 1, columna 2
    //arregloBidimensional[0][2] = 1;        // Cambia el valor en la fila 0, columna 3

    // Mostrar el arreglo bidimensional
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << arregloBidimensional[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}