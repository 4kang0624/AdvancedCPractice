#include <stdio.h>

int main() {
	int num[3][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9}, { 0 }, { 0 } };
	int search, searchResult = 10;

	for (int i = 0; i < 10; i++) {
		num[1][i] = num[0][i] * num[0][i];
		num[2][i] = num[0][i] * num[0][i] * num[0][i];
	}

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &search);
	
	for (int i = 0; i < 10; i++) {
		if (search == num[2][i]) {
			searchResult = i;
		}
	}

	if (searchResult == 10) {
		printf("ã�� ���� �����ϴ�.");
	}
	else {
		printf("%d�� ���������� %d", search, num[0][searchResult]);
	}
}