#include <stdio.h>

int plus(int n);

int main() {
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("1���� %d������ ��=%d", num, plus(num));
}

int plus(int n) {
	if (n == 1) {
		return 1;
	}
	return plus(n - 1) + n;
}