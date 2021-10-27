#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face();

int main() {
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		get_dice_face();
	}
}

void get_dice_face() {
	static int funcCntCheck;
	static int diceFaceCnt[6] = { 0 };
	diceFaceCnt[rand() % 6]++;
	funcCntCheck++;

	if (funcCntCheck >= 100) {
		for (int i = 0; i < 6; i++) {
			printf("%d->%d\n", i + 1, diceFaceCnt[i]);
		}
	}
}