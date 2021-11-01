#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10];
	int max, min;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		num[i] = rand();
	}

	max = num[0];
	min = num[0];

	for (int i = 0; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
		}
		if (min > num[i]) {
			min = num[i];
		}
	}

	printf("최대값은 %d\n최소값은 %d", max, min);

}