#include <stdio.h>

void main() {

//	for (자료형 변수명 = 초기치; 조건식; 증감치) {
//		조건식이 참일 경우 실행할 문장;
//		...;
//	}

	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1 ~ 10의 합계: %d\n", sum);

}