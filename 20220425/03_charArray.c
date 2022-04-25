#include <stdio.h>

void main() {

//	c언어에서 문자 배열은 문자열 데이터를 처리하기 위해 주로 만들어 사용한다.
	char name[] = { 't', 'j', 'o', 'e', 'u', 'n', 'i', 't' };
//	sizeof(): 인수로 지정된 기억장소가 메모리에서 차지하는 크기를 byte 단위로 얻어온다.
	printf("name 배열의 크기: %d byte\n", sizeof(name));
	for (int i = 0; i < sizeof(name); i++) {
		printf("name[%d] = %c\n", i, name[i]);
	}
	printf("======================================\n");

//	배열 이름은 그 배열 전체를 의미한다.
//	배열의 이름은 그 배열이 메모리에 생성된 시작 주소를 의미하는 번지(주소) 상수이다.
	printf("name 배열이 메모리에 생성된 주소: %d\n", name);
	printf("name 배열이 메모리에 생성된 주소: %u\n", name); // unsigned => 부호 없는 숫자
	printf("name 배열이 메모리에 생성된 주소: %p\n", name); // 주소를 16진수로
	printf("======================================\n");

//	"%s"를 사용해서 문자 배열에 저장된 데이터를 출력할 때 문자열의 시작부터 문자열의 끝(null 문자, \0)까지
//	출력한다.
//	name 배열에는 문자열의 끝을 의미하는 null 문자가 없기 때문에 name 배열에 저장된 문자열 뒤의 스레기까지
//	같이 출력된다.
	printf("%s\n", name); // tjoeunit儆儆?t梢?
	printf("======================================\n");

//	문자 배열을 초기치를 사용해서 초기화 할 경우 문자열의 끝을 의미하는 null 문자를 반드시 맨 마지막에
//	붙여야 한다.
	char name2[] = { 't', 'j', 'o', 'e', 'u', 'n', 'i', 't', '\0'};
	printf("name2 배열의 크기: %d byte\n", sizeof(name2));
	for (int i = 0; i < sizeof(name2) - 1; i++) {
		printf("name2[%d] = %c\n", i, name2[i]);
	}
	printf("%s\n", name2); // tjoeunit
	printf("======================================\n");

//	배열 요소에 저장된 값이 null 문자가 아닐 때 까지 출력하면 된다.
	for (int i = 0; name2[i] != '\0'; i++) {
		printf("name2[%d] = %c\n", i, name2[i]);
	}
	printf("======================================\n");

//	{}를 이용해서 문자 단위로 초기치를 지정하면 엄청나게 불편하므로 큰따올표를 이용해서 문자열로
//	문자 배열에 초기치를 지정할 수 있다.
//	문자열을 이용해서 초기치를 지정하면 문자열의 끝을 의미하는 '\0'을 c언어가 자동으로 붙여준다.
	char name3[] = "tjoeunit";
	printf("%s\n", name3);
	printf("name3 배열의 크기: %d byte\n", sizeof(name3));

//	name3 = "academy"; // 배열을 선언할 때를 제외하고 큰따옴표를 이용해서 데이터를 넣으면 에러가 발생된다.
//	배열을 선언할 때를 제외하고 배열에 문자열을 할당하려면 strcpy(사본, 원본) 함수를 사용해야 한다.
	strcpy(name3, "academy");
	printf("%s\n", name3);

}