#include <stdio.h>

//	func �Լ��� �μ��� ������ ������ �����Ǿ����Ƿ� �ּҸ� �Ѱܹ޴´�.
void func(int* p) { // ������ ���� ����

	printf("%d\n", *p); // ������ ���� ����

//	p[2]�� *(p + 2)�� ���� �ǹ��̴�.
//	printf("%d\n", *(p + 2));
	printf("%d\n", p[2]);

}

void main() {

	// �迭�� ������ �� �ʱ�ġ�� �ƿ� �������� ������ ��� �����Ұ� ������� ä��������
	// �Ϻκ��̶� �ʱ�ġ�� �����ϸ� �ʱ�ġ�� �������� ���� �迭 ��Ҵ� 0���� �ʱ�ȭ�ȴ�.
	int a[7] = { 1, 2, 3, 4, 5 }; // a[5]�� a[6]�� 0���� �ʱ�ȭ�ȴ�.
	func(a);
	func(a + 2);

}