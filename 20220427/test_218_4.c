#include <stdio.h>
#include <string.h>

void main() {

	int k, n;
	char st[] = "I am Tom!";
	// printf("%d\n", strlen(st)); // st 배열에 저장된 글자수, null 문자를 포함하지 않는다. // 9
	// printf("%d\n", sizeof(st)); // st 배열이 메모리에서 차지하는 크기, null 문자를 포함한다. // 10
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