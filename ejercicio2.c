#include <stdio.h>

int encontrarMaximo (int arr[], int n) {
	int maximo = arr[0];
	for(int i = 1; i < n; i++) {  
		if (arr[i] > maximo) {  //cambiar el operador menor que < a mayor que > para que sea el mayor numero de arreglo el que se guarde como maximo
			maximo = arr[i];
		}
	}
	return maximo;
}

int main() {
	int numeros[] = {10, 20, 5, 40, 30};
	int n = sizeof(numeros) / sizeof(numeros[0]);
	int maximo = encontrarMaximo(numeros, n);
	printf ("El numero mas grande es: %d\n", maximo);
	return 0;
}
