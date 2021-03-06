#include <stdio.h>

//	a[0]이 메모리 10번지에 생성되었다고 가정한다.
int main(int argc, char* argv[]) {

//	배열의 이름은 그 배열이 메모리에 생성된 시작 주소(0번째 인덱스의 주소)를 의미하는 번지(주소) 상수이다.
//	"&" 연산자가 이항 연산자로 사용되면 비트간의 and 연산을 실행하고 단항 연산자로 사용되면 변수나
//	배열 요소가 메모리에 생성된 주소를 얻어오는 번지 연산자로 사용된다.
//	C++인 경우 변수를 선언할 때 앞에 "&"를 붙여주면 일반 변수가 아닌 주소를 기억하는 참조 변수가 된다.

	int a[] = { 14, 22, 30, 38 };
	printf("&a[2] = %u\n", &a[2]); // 18
	printf("======================================\n");
	// printf("&a[0] = %u \n", &a[0]); // 10
	printf("a = %u\n", a); // 10
	return 0;

}