#include <stdio.h>
#include <stdlib.h>
#define PW 1234

int check();

int main() {
	while (1) {
		if (check() == 1) {
			printf("�α��� ����!!");
			break;
		}
	}
}

int check() {
	static int funcCnt;
	int inputPw;
	printf("��й�ȣ: ");
	scanf("%d", &inputPw);

	if (inputPw == PW) {
		return 1;
	}
	funcCnt++;

	if (funcCnt >= 3) {
		printf("�α��� �õ�Ƚ�� �ʰ�");
		exit(0);
	}
	return 0;
}