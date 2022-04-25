#include <stdio.h>

void main() {

	int a[8], i;
	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		a[i] = 0;
		printf("a[%d] = %d\n", i, a[i]);
	}

	i = 0;
	int n = 100;

	while (n > 0) {
		a[i++] = n % 2;
		n /= 2;
	}

	for (i = sizeof(a) / sizeof(int) - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

}