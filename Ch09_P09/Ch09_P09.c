#include <stdio.h>

int get_digit_sum(int num);

int main() {
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("�ڸ����� ��: %d", get_digit_sum(num));
}

int get_digit_sum(int num) {
	static int sum;
	sum += num % 10;
	if (num < 10) {
		return sum;
	}
	return get_digit_sum(num / 10);
}