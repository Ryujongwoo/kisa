#include <stdio.h>

//	�Լ��� main() �Լ� �ڿ��� ������ ��� main() �Լ� �տ��� �����Ϸ����� �Լ�����
//	�˸��� ���ؼ� �Լ��� ������ �����ؾ� �Ѵ�.
//	�Լ��� ������ {} ����� ������ �Լ��� �Ӹ� �κ��� �ǹ��Ѵ�.
//	�Լ��� ������ ������ �� �μ��� ������ Ÿ�Ը� ��� �ȴ�.
int factorial(int);

void main() {

//	int (*pf)(int); // ���� Ÿ���� int �̰� int�� �μ� 1���� ������ �Լ� ������
//	pf = factorial; // �Լ� �����Ϳ� factorial �Լ��� ������ �޸��� �ּҸ� �־��ش�.
//	printf("%d", pf(5));
	printf("%d", factorial(5));

//	factorial(5)
//	5 * factorial(4)
//	5 * (4 * factorial(3))
//	5 * (4 * (3 * factorial(2))
//	5 * (4 * (3 * (2 * factorial(1)))
//	5 * (4 * (3 * (2 * (1)))

//	5 * (4 * (3 * (2))
//	5 * (4 * (6))
//	5 * (24)
//	120

}

int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}