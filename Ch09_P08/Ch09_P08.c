#include <stdio.h>

int count(int a);

int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("자리수의 개수: %d", count(num));
}

int count(int num) {
	static int funcCnt;
	funcCnt++;
	if (num < 10) {
		return funcCnt;
	}
	return count(num / 10);
}