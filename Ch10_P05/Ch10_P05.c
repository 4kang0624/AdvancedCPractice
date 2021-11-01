#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int count[10] = { 0 };
	int max = 0;
	
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		count[rand() % 10]++;
	}

	for (int i = 0; i < 10; i++) {
		if (count[i] > count[max]) {
			max = i;
		}
	}

	printf("가장 많이 나온 수 : %d", max);
	
}