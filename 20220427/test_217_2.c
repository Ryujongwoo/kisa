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

	ary[2] = *ary + 3; // ary는 ary[0]이 메모리에 생성된 주소, ary[0] + 3
	// printf("%d\n", ary[2]); // 4

	// 제어문이 실행할 문장이 딱 1문장일 경우 {} 블록을 생략할 수 있다.
	for (int i = 0; i < 3; i++) {
		s = s + ary[i]; // s += ary[i]
	}
	printf("%d\n", s);

}