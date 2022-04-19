import java.util.Scanner;

public class MyCalendar {

//	python 함수 형식, []로 묶은 내용은 생략 가능하다.
//	def 함수이름([인수, ...]):
//		함수가 실행할 문장
//		...
//		[return 값]
	
//	java 메소드 형식, []로 묶은 내용은 생략 가능하다.
//	[접근 권한 지정자] [static] 리턴타입 메소드이름([인수, ...]) {
//		메소드가 실행할 문장;
//		...;
//		[return 값;]
//	}
	
//	접근 권한 지정자
//	private: 현재 클래스 외부에서 접근할 수 없다.
//	protected: 현재 클래스와 현재 클래스를 상속받은 자식 클래스에서만 접근할 수 있다.
//	package: 예전에는 default라 불렀다. 접근 권한 생략시 package 권한으로 취급된다.
//	같은 패키지에서는 public 처럼 사용되고 다른 패키지에서는 private 처럼 사용된다.
//	public: 현재 클래스 내부, 외부 어디에서나 자유롭게 접근할 수 있다.
	
//	정적(static) 메소드는 메소드를 선언한 클래스의 객체를 생성하지 않고 클래스 이름에 "."을 찍어
//	실행할 수 있다. => 자주 사용하는 메소드는 static으로 만들어 사용하면 편리하다.
	
//	리턴 타입은 메소드가 실행되고 난 후 결과롤 돌려줄 때 결과의 자료형을 적어준다.
//	경우에 따라서 메소드 실행 결과가 없을 수 있다. 이럴 경우 return을 생략할 수 있으며 리턴 타입에는
//	"void"라고 쓰면 된다.
	
//	윤년, 평년 판별 메소드
//	년도를 인수로 넘겨받아 윤년, 평년을 판단해서 윤년이면 true, 평년이면 false를 리턴하는 메소드
	public static boolean isLeapYear(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}
	
//	static 메소드는 static 메소드만 실행할 수 있다.
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("달력을 출력할 년, 월을 입력하세요: ");
		int year = scanner.nextInt();
		int month = scanner.nextInt();
		
//		메소드를 호출할 때는 이름을 불러주면 된다.
//		호출된 메소드가 실행이 완료되면 호출된 위치로 return 값을 가지고 돌아온다.
		System.out.println(isLeapYear(year));
	}
	
}



















