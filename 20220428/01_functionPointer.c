#include <stdio.h>

//	()안에 "*"을 적으면 함수 포인터가 된다. => 함수가 메모리에 생성된 주소를 기억한다.
//	Func는 리턴 타입이 int이고 int형 인수를 2개 넘겨받는 함수의 주소를 기억하는 함수 포인터이다.
typedef int (*Func)(int, int);

int Add(int a, int b) {
	return a + b;
}
int Sub(int a, int b) {
	return a - b;
}
int Mul(int a, int b) {
	return a * b;
}
int Div(int a, int b) {
	return a / b;
}

void main() {

	printf("Add(5, 3) = %d\n", Add(5, 3));
	printf("Sub(5, 3) = %d\n", Sub(5, 3));

	Func func = Add; // 함수 포인터 변수 func에 Add 함수가 생성된 메모리의 주소를 넣어준다.
	printf("Add(5, 3) = %d\n", func(5, 3));
	func = Sub;
	printf("Sub(5, 3) = %d\n", func(5, 3));

	Func pFunc[] = { Add, Sub, Mul, Div };
	for (int i = 0; i < 4; i++) {
		printf("%d\n", pFunc[i](7, 4));
	}

}