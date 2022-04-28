#include <stdio.h>

//	함수가 처리할 데이터(a, b)와 데이터를 처리할 함수의 주소를 기억하는 함수 포인터(*pFunc)를 인수로
//	가지는 함수
int func(int a, int b, int (*pFunc)(int, int)) {
	return (*pFunc)(a, b); // 인수로 받은 함수를 실행해서 결과를 리턴시킨다.
}

int Add(int a, int b) {
	return a + b;
}

void main() {

	int (*a)(int, int) = Add; // a에는 Add 함수가 메모리에 생성된 주소가 저장된다.
	// func 함수로 처리할 데이터(5, 3)와 데이터를 처리할 함수의 주소(a)를 인수로 넘긴다.
	printf("Add(5, 3) = %d\n", func(5, 3, a));

}