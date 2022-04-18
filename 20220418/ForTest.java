
public class ForTest {

	public static void main(String[] args) {
		
//		for는 {} 블록을 조건이 만족하는 동안 반복해서 실행한다.
//		반복 횟수가 알려져 있는 경우 주로 사용한다.
		
//		일반 for
//		변수에 저장된 초기치로 조건식을 비교해서 참이면 반복을 실행한다.
//		{} 블록을 1번 반복한 후 변수값을 증감치 만큼 변경시킨 후 조건식을 비교해서 참이면 반복을 
//		실행하고 거짓이면 반복을 중지한다.
//		for (자료형 변수명=초기치; 조건식; 증감치) {
//			반복해서 실행할 문장;
//			...
//		}
		
		int sum = 0;
		for (int i=1; i<=10; i++) {
			sum += i;
		}
		System.out.println("1 ~ 10의 합계: " + sum);
		
//		향상된 for
//		":" 뒤의 배열이나 List 타입의 자료형의 0번째 index의 값 부터 마지막 index의 값까지 차례대로
//		변수에 저장되며 반복한다.
//		for (자료형 변수명 : 배열 또는 List 타입의 자료형) {
//			반복해서 실행할 문장;
//			...
//		}
		
//		증감 연산자: ++(1증가), --(1감소) => 단항 연산자
//		변수++: 사용 후 1증가, 변수에 저장된 값을 사용(연산)하고 ";"을 만나 문장이 종료될 때 1증가 한다.
//		++변수: 1증가 후 사용, 변수에 저장된 값을 1증가시키고 사용(연산)한다.
//		변수--: 사용 후 1증가, 변수에 저장된 값을 사용(연산)하고 ";"을 만나 문장이 종료될 때 1증가 한다.
//		--변수: 1증가 후 사용, 변수에 저장된 값을 1증가시키고 사용(연산)한다.
		
		int a = 1, b, c;
		b = a++;
		c = ++a;
		System.out.println("a: " + a + ", b: " + b + ", c: " + c);
		
		int d = 1, e;
		e = ++d + ++d + ++d + ++d;
		System.out.println("d: " + d + ", e: " + e);
		
		// 기출
		int w = 3, x = 4, y = 3, z = 5;
		
		System.out.println("w == 2 | w == y: " + (w == 2 | w == y)); // true
		System.out.println("!(y > z): " + !(y > z)); // true
		System.out.println("1 == x ^ y != z: " + (1 == x ^ y != z)); // true
		System.out.println("7 == x ^ y != w: " + (7 == x ^ y != w)); // true
		
		if ((w == 2 | w == y) & !(y > z) & (1 == x ^ y != z)) {
			
			w = x + y; // 7
			
			if (7 == x ^ y != w) {
				System.out.println(w); // 7
			} else {
				System.out.println(x); // 4
			}
			
		} else {
			
			w = y + z;
			
			if (7 == y ^ z != y) {
				System.out.println(w); // 8
			} else {
				System.out.println(z); // 5
			}
			
		}
		
	}
	
}












