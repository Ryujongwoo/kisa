#include <stdio.h>

int main(int argc, char* argv[]) {

	int n1 = 1, n2 = 2, n3 = 3;
	int r1, r2, r3;

	r1 = (n2 <= 2) || (n3 > 3); // true || ���� ������ => true => 1
	r2 = !n3; // !3 => !true => false => 0
	r3 = (n1 > 1) && (n3 < 3); // false && ���� ������ => false => 0

	printf("%d", r3 - r2 + r1); // 0 - 0 + 1
	return 0;

}