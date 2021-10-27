#include <stdio.h>
#include <stdlib.h>
#define PW 1234

int check();

int main() {
	while (1) {
		if (check() == 1) {
			printf("로그인 성공!!");
			break;
		}
	}
}

int check() {
	static int funcCnt;
	int inputPw;
	printf("비밀번호: ");
	scanf("%d", &inputPw);

	if (inputPw == PW) {
		return 1;
	}
	funcCnt++;

	if (funcCnt >= 3) {
		printf("로그인 시도횟수 초과");
		exit(0);
	}
	return 0;
}