#include <stdio.h>

void main() {

	char* p = "KOREA"; // ������ ���� p���� KOREA ���ڿ��� �޸𸮿� ������ ���� �ּҰ� ����ȴ�.

	// %s�� ���ڿ��� ����ϸ� ���� �ּ��� ������� null(\0) ���ڱ��� ����Ѵ�.
	printf("%s\n", p); // KOREA
	printf("%s\n", p + 3); // EA
	printf("%c\n", *p); // ������ ���� p�� ����� �ּҰ� �����ϴ� ��, K
	printf("%c\n", *(p + 3)); // E
	printf("%c\n", *p + 2); // M
	printf("%d\n", *p + 2); // 77

}