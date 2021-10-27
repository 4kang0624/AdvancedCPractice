#include <stdio.h>

int power(int base, int power_raised);

int main() {
	int base, power_raised;
	printf("¹Ø¼ö: ");
	scanf("%d", &base);
	printf("Áö¼ö: ");
	scanf("%d", &power_raised);
	printf("%d^%d = %d", base, power_raised, power(base, power_raised));
}

int power(int base, int power_raised) {
	if (power_raised == 1) {
		return base;
	}
	return power(base, power_raised - 1) * base;
}