
public class IfTest {

	public static void main(String[] args) {
		
//		관계 연산자
//		>=, >, <=, < 를 먼저하고 ==, != 를 나중에 한다.
		
//		논리 연산자
//		&&: and
//		||: or
//		!: not
		
//		단항 연산자(!, ++, --) => 이항 연산자(대부분) => 삼항 연산자(?:) => 대입 연산자(=와 같이 사용)
//		이항 연산자: 산술(*, / % => +, -) => 관계(>=, >, <=, <= ~~> ==, !=) => 논리(&& => ||)  
		
//		if (조건식) {
//			조건이 참인 경우 실행할 문장
//		} else {
//			조건이 거짓인 경우 실행할 문장
//		}
		
//		비트 (논리) 연산자
//		&: 비트 and => 둘 다 1이면 1
//		|: 비트 or => 둘 중에 1개 이상 1이면 1
//		^: 비트 xor => 서로 다르면 1
//		~: 비트 부정 => 0은 1로 1은 0으로 바꾼다. => 1의 보수
		
		int a = 6, b = 5;
		
		System.out.println(a & b); // 4
//		6: 0110
//		5: 0101
//		&: 0100 => 4
		
		System.out.println(a | b); // 7
//		6: 0110
//		5: 0101
//		&: 0111 => 7
		
		System.out.println(a ^ b); // 3
//		6: 0110
//		5: 0101
//		&: 0011 => 3
		
		boolean c = true, d = false;
		System.out.println(c & d);
//		true:  0001
//		false: 0000
//	    &      0000 => false => C언어는 0
		
		System.out.println(c | d);
//		true:  0001
//		false: 0000
//	    |      0001 => true => C언어는 1
		
		System.out.println(c ^ d);
//		true:  0001
//		false: 0000
//	    ^      0001 => true => C언어는 1
		
//		보수는 사람 기준(10진수를 사용)으로 9의 보수와 10의 보수가 있다.
//		보수는 컴퓨터 기준(2진수를 사용)으로 1의 보수와 2의 보수가 있다.
		
//		9의 보수는 숫자에 어떤수를 더해야 그자리에 꽉 차는 수인가?
//		4 + ? = 9, 27 + ?? = 99와 같이 ?에 들어가는 숫자가 9의 보수이다.
//		10의 보수는 숫자에 어떤수를 더해야 다음 자리로 올림수가 발생하는 수인가?
//		4 + ? = 10, 27 + ?? = 100와 같이 ?에 들어가는 숫자가 9의 보수이다.
//		9의 보수와 10의 보수는 9의 보수에 1을 더하면 10의 보수가 되는 관계이다.
		
//		사람은 10진수를 사용하기 때문에 9의 보수와 10의 보수를 사용하지만 컴퓨터는 2진수를
//		사용하기 때문에 1의 보수와 2의 보수를 사용한다.
		
//		4: 0100
//		+:
//		=: 1111
//		0100의 1의 보수는 1011이다.
		
//		4:  0100
//		+:
//		=: 10000
//		0100의 2의 보수는 1100이다.
		
//		고정 소수점 => 음수 표현 방법
//		개인용 컴퓨터는 모든 연산을 덧셈으로 처리한다. => 감산기를 별도로 장착하지 않는다. => 비용
//		뺄셈도 덧셈으로 계산한다.
//		5 - 3 = 2 => 5 + (-3) = 2 => 양수 3을 음수 3으로 변환 시켜야 한다. => 음수 표현 방법
		
//		고정 소수점 방식은 부호와 절대치, 1의 보수법, 2의 보수법이 있다. => 현재는 2의 보수법만 사용한다.
//		부호와 절대치, 1의 보수법은 0이 2개 존재하기 때문에 사용하지 않는다.
//		2의 보수법은 0이 1개이고 0이 남는 것으로 1더 작은 음수를 표현할 수 있다.
		
		System.out.println(~4); // -5
//		4: 0100
//		~: 1011
//		바꿔놓고 보니 최상위 비트가 1이므로 숫자의 전체 부호는 음수이고 최상위 비트를 제외한 나머지 비트를
//		2의 보수로 변경하면 5이므로 결과가 -5가 된다.
		
	}
	
}








