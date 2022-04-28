#include <stdio.h>

//	()�ȿ� "*"�� ������ �Լ� �����Ͱ� �ȴ�. => �Լ��� �޸𸮿� ������ �ּҸ� ����Ѵ�.
//	Func�� ���� Ÿ���� int�̰� int�� �μ��� 2�� �Ѱܹ޴� �Լ��� �ּҸ� ����ϴ� �Լ� �������̴�.
typedef int (*Func)(int, int);

int Add(int a, int b) {
	return a + b;
}
int Sub(int a, int b) {
	return a - b;
}
int Mul(int a, int b) {
	return a * b;
}
int Div(int a, int b) {
	return a / b;
}

void main() {

	printf("Add(5, 3) = %d\n", Add(5, 3));
	printf("Sub(5, 3) = %d\n", Sub(5, 3));

	Func func = Add; // �Լ� ������ ���� func�� Add �Լ��� ������ �޸��� �ּҸ� �־��ش�.
	printf("Add(5, 3) = %d\n", func(5, 3));
	func = Sub;
	printf("Sub(5, 3) = %d\n", func(5, 3));

	Func pFunc[] = { Add, Sub, Mul, Div };
	for (int i = 0; i < 4; i++) {
		printf("%d\n", pFunc[i](7, 4));
	}

}