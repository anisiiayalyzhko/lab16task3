// lab16task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  
#include <cmath> 

int main() {
	int n;
	printf("Enter n (size of a matrix NxN):");
	scanf_s("%d", &n);
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
		printf("Enter row with index %d:\n", i);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &array[i][j]);
		}
	}
	int maximalDiagonalNumber = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (array[i][i] > maximalDiagonalNumber) {
			maximalDiagonalNumber = array[i][i];
		}
	}
	printf("Number = %d", maximalDiagonalNumber);
	return 0;
}

