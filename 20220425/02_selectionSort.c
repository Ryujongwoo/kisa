#include <stdio.h>

void main() {

	int data[] = { 8, 3, 4, 9, 1 };

	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (data[i] > data[j]) {
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		} // ȸ�� ����

		printf("%d ȸ�����: ", i + 1);
		for (int i = 0; i < 5; i++) {
			printf("%d ", data[i]);
		}
		printf("\n");

	} // ���� ����

	printf("���İ��: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

}