#include <stdio.h>

int get_digit_sum(int num);

int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("자리수의 합: %d", get_digit_sum(num));
}

int get_digit_sum(int num) {
	static int sum;
	sum += num % 10;
	if (num < 10) {
		return sum;
	}
	return get_digit_sum(num / 10);
}