#include <stdio.h>

void main() {

	char* p = "KOREA"; // 포인터 변수 p에는 KOREA 문자열이 메모리에 생성된 시작 주소가 저장된다.

	// %s로 문자열을 출력하면 시작 주소의 내용부터 null(\0) 문자까지 출력한다.
	printf("%s\n", p); // KOREA
	printf("%s\n", p + 3); // EA
	printf("%c\n", *p); // 포인터 변수 p에 저장된 주소가 참조하는 값, K
	printf("%c\n", *(p + 3)); // E
	printf("%c\n", *p + 2); // M
	printf("%d\n", *p + 2); // 77

}