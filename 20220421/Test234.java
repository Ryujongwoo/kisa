class ClassA {
	
	ClassA() { // 생성자, 접근 권한: package
		System.out.print('A');
		this.prn();
	}

	void prn() {
		System.out.print('B');
	}
	
}

class ClassB extends ClassA {
	
	ClassB() {
//		자식 클래스의 생성자보다 항상 부모 클래스의 생성자가 먼저 실행된다.
//		super();
		System.out.print('D');
	}
	
	void prn() { // 오버라이드
		System.out.print('E');
	}
	
	void prn(int x) {
		System.out.print(x);
	}
	
}

public class Test234 {

	public static void main(String[] args) {
		
		ClassA classA = new ClassA();
		System.out.println("================");
		
		int x = 7;
		ClassB cal = new ClassB();
		cal.prn(x);
		
	}
	
}














