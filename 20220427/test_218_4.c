#include <stdio.h>
#include <string.h>

void main() {

	int k, n;
	char st[] = "I am Tom!";
	// printf("%d\n", strlen(st)); // st �迭�� ����� ���ڼ�, null ���ڸ� �������� �ʴ´�. // 9
	// printf("%d\n", sizeof(st)); // st �迭�� �޸𸮿��� �����ϴ� ũ��, null ���ڸ� �����Ѵ�. // 10
	char temp;
	n = strlen(st); // 9
	n--; // 8

	for (k = 0; k < n; k++) { // 4
		temp = *(st + k);
		*(st + k) = *(st + n);
		*(st + n) = temp;
		n--; // 4
	}
	printf("%s\n", st);

}