#include <stdio.h>

void main() {

	/*
//	정적 할당
	char name[11]; // 문자열의 끝을 의미하는 '\0'이 저장될 공간이 있어야 하기 때문에 1크게 만든다.
	printf("이름: ");
//	scanf() 함수로 입력받는 변수는 "&"를 붙여서 주소로 만들어야 하지만 배열 이름은 자체가 주소이므로
//	"&"를 붙일 필요가 없다.
	scanf("%s", name);
//	scanf_s() 함수는 3번째 인수로 입력받을 문자열의 최대 크기를 지정한다.
//	scanf_s("%s", name, sizeof(name));
	printf("%s님 안녕하세요\n", name);
	*/

//	포인터 변수 s에는 "gilbut"이라는 문자열에 메모리에 생성된 주소가 저장된다.
	char* s = "gilbut";
	printf("%s\n", s);
	printf("%c\n", s[0]);
	printf("%c\n", s[1]);
	printf("%c\n", *(s + 2));
	printf("%c\n", *s + 2);

}
