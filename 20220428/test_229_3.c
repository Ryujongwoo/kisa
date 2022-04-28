#include <stdio.h>

int sub(int i, int j) {
	return i - j;
}

int add(int i, int j) {
	return i + j;
}

void main() {

	int i, j, result;
	int (*pf)(int, int);
	scanf("%d, %d", &i, &j);

	pf = add; // add, sub
	result = pf(i, j); // result
	printf("%d, ", result);

	pf = sub;
	result = pf(i, j);
	printf("%d", result);

}

// 18, 6