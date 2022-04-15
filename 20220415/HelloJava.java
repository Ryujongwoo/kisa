
public class HelloJava {

	public static void main(String[] args) {
		
//		println()은 출력하고 줄을 바꾸고 print()는 출력하고 줄을 바꾸지 않는다.
		System.out.print("안녕 자바1");
		System.out.println("안녕 자바2");
		System.out.println("안녕 \n자바3");
//		printf()는 서식을 지정해서 출력할 수 있다.
//		System.out.printf("%05s", "abc"); // 에러
		System.out.printf("%c\n", 'a');
		System.out.println("1. ========================================");
		
//		"+" 양쪽이 숫자면 덧셈, "+"의 한쪽이라도 문자열이면 문자열 연결 연산자로 사용된다.
		System.out.println(5 + 3);
		System.out.println(5 + " + " + 3 + " = " + 5 + 3);
		System.out.println(5 + " + " + 3 + " = " + (5 + 3));
		System.out.println(5 + " - " + 3 + " = " + (5 - 3));
//		자바는 정수와 정수의 연산은 결과도 정수다.
		System.out.println(5 + " / " + 3 + " = " + 5 / 3);
		System.out.println(5 + " / " + 3 + " = " + 5 / 3.);
		System.out.println(5 + " % " + 3 + " = " + 5 % 3);
		System.out.println("2. ========================================");
		
//		자바의 기본 자료형
//		boolean: 1byte, 논리값(true, false)을 기억한다.
//		byte: 1byte, 2진 데이터를 기억한다. 파일 전송
//		char: 2byte, 문자 1개
//		short: 2byte, -32768 ~ 32767 사이의 정수를 기억한다.
//		int: 4byte, -2147483648 ~ 2147483647 사이의 정수를 기억한다.
//		long: 8byte, -2의 63승 ~ 2의 63승 - 1 사이의 정수를 기억한다.
//		float: 4byte, 단정도 실수, 소수점 아래 6자리 정도를 표현한다.
//		double: 8byte, 배정도 실수, 소수점 아래 16자리 정도를 표현한다.
		
//		묵시적(암시적) 형변환
//		정수는 실수로 변경되고 자료형의 크기가 서로 다른 연산 결과는 크기가 큰 자료형으로 자동 변환된다.
//		byte => short => int => long => float => double
//		         char =>
		
		System.out.println("A" + 32); // A32
		System.out.println('A' + 32); // 97
		System.out.println('a' - 32); // 65
		
//		명시적 형변환
//		프로그래머가 그 순간의 자료형을 지정할 수 있다. casting
		
		System.out.println((char) ('A' + 32)); // a
		System.out.println((char) ('a' - 32)); // A
		
	}
	
}







