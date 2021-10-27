#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

int main() {
	for (int i = 0; i < 10; i++) {
		printf("%d\n", get_random());
	}
}

int get_random() {
	static int firstFunc;
	if (firstFunc == 0) {
		srand(time(0));
		printf("초기화 실행\n");
		firstFunc++;
	}
	return rand();
}