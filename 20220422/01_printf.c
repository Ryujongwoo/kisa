#include <stdio.h>

void main() {

	// printf("��¼���", ����� ������);
	printf("%5d\n", 100);
	printf("%5d\n", 1);
	printf("%-5d\n", 1);
	printf("%05d\n", 1);
	printf("%5d\n", 10000);
	printf("==============\n");
	
	printf("%5s\n", "abc");
	printf("%5s\n", "a");
	printf("%-5s\n", "a");
	printf("%05s\n", "a");
	printf("%5s\n", "abcde");
	printf("==============\n");

	printf("%d\n", 'a');
	printf("%d\n", 'A');
	printf("%d\n", '0');
	printf("%c\n", 'a');
	printf("%c\n", 'A');
	printf("%c\n", '0');
	printf("==============\n");

	// c����� �⺻ �ڷ���
	// bool: 1����Ʈ, c���� ���� c++���� �߰��� �ڷ��� ��(true => 1) �Ǵ� ����(false => 0)�� ����Ѵ�.
	// char: 1����Ʈ, Ű���� ���� ������, ����, Ư������ 1���� ����Ѵ�.
	//       => �ѱ�, ����, Ű���忡 ���� Ư�����ڴ� 2����Ʈ �̴�. => char ������ ������ �� ����. => �迭
	// short: 2����Ʈ, -32768 ~ 32767 ������ ����
	// int: 4����Ʈ, -2147483648 ~ 2147483647 ������ ����
	// long: 8����Ʈ, -2�� 63�� ~ 2�� 63�� - 1 ������ ����
	// float: 4����Ʈ, ������ �Ǽ�, �Ҽ��� �Ʒ� 6�ڸ� ������ ǥ���Ѵ�.
	// double: 8����Ʈ, ������ �Ǽ�, �Ҽ��� �Ʒ� 16�ڸ� ������ ǥ���Ѵ�.

	// ������ ����ȯ
	// ������ ������ ������ ����� ������.
	printf("%d / %d = %d\n", 5, 3, 5 / 3);
	printf("%d / %d = %f\n", 5, 3, (double) 5 / 3);
	printf("%d / %d = %f\n", 5, 3, 5 / 3.);
	printf("%c + %d = %d\n", 'A', 32, 'A' + 32);
	printf("%c + %d = %c\n", 'A', 32, 'A' + 32);
	
}