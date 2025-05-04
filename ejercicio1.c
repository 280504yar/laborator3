#include <stdio.h> //Punto de partida, permite usar printf

void calcularSumaDiagonal(int n, int matriz[n][n]); // Declaracion de funcion que calcula suma de los valores de la diagonal principal y secundaria

int main() {
        int matriz[5][5] = {        //Se define la matriz y se escriben los valores
                {1, 2, 3, 1, 4},
                {4, 5, 6, 2, 5},
                {7, 8, 9, 3, 7},
		{9, 4, 2, 4, 9},
		{3, 4, 2, 8, 9}
        };
	calcularSumaDiagonal(5, matriz);
	return 0; //Devuelve un valor
}

void calcularSumaDiagonal(int n, int matriz[n][n]) { //Define la funcion
	int sumaDiagonal1 = 0; //Inicializar las variables acumuladoras
	int sumaDiagonal2 = 0;


	for (int i = 0; i < n; i++) {                //Establecer ciclo para recorrer la matriz
		sumaDiagonal1 += matriz[i][i];       //La variable acumuladora de la diagonal1(principal) ira sumando los valores que esten la posicion de la diagonal
		sumaDiagonal2 += matriz[i][n-1-i];   ////La variable acumuladora de la diagonal2(secundaria) ira sumando los valores que esten la posicion de la diagonal
	}

	//Imprime el resultado
	printf("Suma diagonal1: %d\n", sumaDiagonal1);
       	printf("Suma diagonal2: %d\n", sumaDiagonal2);
}
