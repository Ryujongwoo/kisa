#include <stdio.h>

//	함수를 main() 함수 뒤에서 선언할 경우 main() 함수 앞에서 컴파일러에게 함수임을
//	알리기 위해서 함수의 원형을 선언해야 한다.
//	함수의 원형은 {} 블록을 제외한 함수의 머리 부분을 의미한다.
//	함수의 원형을 정의할 때 인수는 데이터 타입만 적어도 된다.
int factorial(int);

void main() {

//	int (*pf)(int); // 리턴 타입이 int 이고 int형 인수 1개를 가지는 함수 포인터
//	pf = factorial; // 함수 포인터에 factorial 함수가 생성된 메모리의 주소를 넣어준다.
//	printf("%d", pf(5));
	printf("%d", factorial(5));

//	factorial(5)
//	5 * factorial(4)
//	5 * (4 * factorial(3))
//	5 * (4 * (3 * factorial(2))
//	5 * (4 * (3 * (2 * factorial(1)))
//	5 * (4 * (3 * (2 * (1)))

//	5 * (4 * (3 * (2))
//	5 * (4 * (6))
//	5 * (24)
//	120

}

int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}