#include <stdio.h>

void main() {

	int ary[3];
	int s = 0;

	*(ary + 0) = 1; // ary[0] = 1
	// printf("%p\n", ary);
	// printf("%p\n", &ary[0]);
	// printf("%d\n", ary[0]); // 1

	ary[1] = *(ary + 0) + 2; // ary[0] + 2
	// printf("%d\n", ary[1]); // 3

	ary[2] = *ary + 3; // ary�� ary[0]�� �޸𸮿� ������ �ּ�, ary[0] + 3
	// printf("%d\n", ary[2]); // 4

	// ����� ������ ������ �� 1������ ��� {} ����� ������ �� �ִ�.
	for (int i = 0; i < 3; i++) {
		s = s + ary[i]; // s += ary[i]
	}
	printf("%d\n", s);

}