#include <stdio.h>

int plus(int n);

int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("1부터 %d까지의 합=%d", num, plus(num));
}

int plus(int n) {
	if (n == 1) {
		return 1;
	}
	return plus(n - 1) + n;
}