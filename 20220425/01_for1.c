#include <stdio.h>

void main() {

//	for (�ڷ��� ������ = �ʱ�ġ; ���ǽ�; ����ġ) {
//		���ǽ��� ���� ��� ������ ����;
//		...;
//	}

	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1 ~ 10�� �հ�: %d\n", sum);

}