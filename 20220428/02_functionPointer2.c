#include <stdio.h>

//	�Լ��� ó���� ������(a, b)�� �����͸� ó���� �Լ��� �ּҸ� ����ϴ� �Լ� ������(*pFunc)�� �μ���
//	������ �Լ�
int func(int a, int b, int (*pFunc)(int, int)) {
	return (*pFunc)(a, b); // �μ��� ���� �Լ��� �����ؼ� ����� ���Ͻ�Ų��.
}

int Add(int a, int b) {
	return a + b;
}

void main() {

	int (*a)(int, int) = Add; // a���� Add �Լ��� �޸𸮿� ������ �ּҰ� ����ȴ�.
	// func �Լ��� ó���� ������(5, 3)�� �����͸� ó���� �Լ��� �ּ�(a)�� �μ��� �ѱ��.
	printf("Add(5, 3) = %d\n", func(5, 3, a));

}