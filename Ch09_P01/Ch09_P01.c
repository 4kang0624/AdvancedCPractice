#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int div(int a, int b);

int main() {
	int a, b;
	char mark;
	int result = 0;
	while (1) {
		printf("연산을 입력하시오: ");
		scanf("%d%c%d", &a, &mark, &b);
		switch (mark) {
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = sub(a, b);
			break;
		case '*':
			result = multi(a, b);
			break;
		case '/':
			result = div(a, b);
			break;
		}
		printf("연산 결과: %d\n", result);
	}
}

int add(int a, int b) {
	static int count;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	return a - b;
}

int multi(int a, int b) {
	static int count;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	return a * b;
}

int div(int a, int b) {
	static int count;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	return a / b;
}