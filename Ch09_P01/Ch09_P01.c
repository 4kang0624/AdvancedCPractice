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
		printf("������ �Է��Ͻÿ�: ");
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
		printf("���� ���: %d\n", result);
	}
}

int add(int a, int b) {
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a - b;
}

int multi(int a, int b) {
	static int count;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return a * b;
}

int div(int a, int b) {
	static int count;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	return a / b;
}