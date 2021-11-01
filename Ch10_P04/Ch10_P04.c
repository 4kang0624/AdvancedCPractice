#include <stdio.h>

void array_copy(int a[], int b[], int size);

int main() {
	int a[10] = { 1, 2, 3, 0 };
	int b[10];

	array_copy(a, b, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
}

void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}
}