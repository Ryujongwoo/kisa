#include <stdio.h>

int main(int argc, char* argv[]) {

	int a = 5, b = 3, c = 12;
	int t1, t2, t3;

	// 0�� ����, 0�� �ƴ� ������ ���ڴ� ��
	t1 = a && b; // 5 && 3 => true && true => true => 1
	t2 = a || b; // 5 || 3 => true || true => true => 1
	t3 = !c; // !12 => !true => false => 0

	printf("%d", t1 + t2 + t3); // 1 + 1 + 0
	return 0;

}