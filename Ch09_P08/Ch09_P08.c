#include <stdio.h>

int count(int a);

int main() {
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("�ڸ����� ����: %d", count(num));
}

int count(int num) {
	static int funcCnt;
	funcCnt++;
	if (num < 10) {
		return funcCnt;
	}
	return count(num / 10);
}