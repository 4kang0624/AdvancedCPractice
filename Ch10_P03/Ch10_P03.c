#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main() {
	int a[10] = { 1, 2, 3, 0 };
	int b[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}

	if (array_equal(a, b, 10) == 0) {
		printf("\n2개의 배열은 다름");
	}
	else {
		printf("\n2개의 배열은 같음");
	}
}

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			return 0;
		}
	}
	return 1;
}