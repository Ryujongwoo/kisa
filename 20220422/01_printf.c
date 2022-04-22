#include <stdio.h>

void main() {

	// printf("출력서식", 출력할 데이터);
	printf("%5d\n", 100);
	printf("%5d\n", 1);
	printf("%-5d\n", 1);
	printf("%05d\n", 1);
	printf("%5d\n", 10000);
	printf("==============\n");
	
	printf("%5s\n", "abc");
	printf("%5s\n", "a");
	printf("%-5s\n", "a");
	printf("%05s\n", "a");
	printf("%5s\n", "abcde");
	printf("==============\n");

	printf("%d\n", 'a');
	printf("%d\n", 'A');
	printf("%d\n", '0');
	printf("%c\n", 'a');
	printf("%c\n", 'A');
	printf("%c\n", '0');
	printf("==============\n");

	// c언어의 기본 자료형
	// bool: 1바이트, c에는 없고 c++에서 추가된 자료형 참(true => 1) 또는 거짓(false => 0)을 기억한다.
	// char: 1바이트, 키보드 위의 영문자, 숫자, 특수문자 1개를 기억한다.
	//       => 한글, 한자, 키보드에 없는 특수문자는 2바이트 이다. => char 변수에 저장할 수 없다. => 배열
	// short: 2바이트, -32768 ~ 32767 사이의 정수
	// int: 4바이트, -2147483648 ~ 2147483647 사이의 정수
	// long: 8바이트, -2의 63승 ~ 2의 63승 - 1 사이의 정수
	// float: 4바이트, 단정도 실수, 소수점 아래 6자리 정도를 표현한다.
	// double: 8바이트, 배정도 실수, 소수점 아래 16자리 정도를 표현한다.

	// 묵시적 형변환
	// 정수와 정수의 연산은 결과도 정수다.
	printf("%d / %d = %d\n", 5, 3, 5 / 3);
	printf("%d / %d = %f\n", 5, 3, (double) 5 / 3);
	printf("%d / %d = %f\n", 5, 3, 5 / 3.);
	printf("%c + %d = %d\n", 'A', 32, 'A' + 32);
	printf("%c + %d = %c\n", 'A', 32, 'A' + 32);
	
}