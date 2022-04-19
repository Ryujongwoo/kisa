
public class StringTest {

	public static void main(String[] args) {
		
//		자바는 기본 자료형(boolean, byte, char, short, int, long, float, double)으로 만든 변수는 일반 변수로
//		취급하고 클래스로 만든 변수(객체)는 참조 변수(데이터를 기억하는게 아니라 주소를 기억한다.)로
//		취급한다.
		
//		문자열 "ABC"가 처음으로 사용되므로 메모리 어딘가에 "ABC"를 만들고 시작 주소를 str1에 저장한다.
		String str1 = "ABC";
//		문자열 "ABC"는 이미 메모리에 생성되어있는 상태이므로 이미 생성된 "ABC"의 시작 주소를 str2에 저장한다. 
		String str2 = "ABC";
		
//		"=="를 사용해서 비교할 수 있는 값은 기본 자료형과 null 까지만 가능하다. "=="를 사용해서는 클래스로
//		만든 객체를 비교하면 데이터를 비교하지 않고 객체가 생성된 주소를 비교한다.
		System.out.println(str1 == str2 ? "같다" : "다르다");
		
//		아래와 같이 new를 이용해서 "ABC"를 만들면 메모리에 "ABC"의 존재 여부와 상관없이 무조건 다시 만들어
//		시작 주소를 str3에 저장한다.
		String str3 = new String("ABC");
		System.out.println(str1 == str3 ? "같다" : "다르다");
		
//		결론: 기본 자료형과 null을 제외한 클래스로 생성한 모든 객체는 "=="로 비교하지 않고 equals() 메소드로
//		비교해야 한다.
//		equals() 메소드는 객체에 저장된 주소를 비교하지 않고 객체에 저장된 주소가 참조하는 값(데이터)을
//		비교한다.
		System.out.println(str1.equals(str2) ? "같다" : "다르다");
		System.out.println(str1.equals(str3) ? "같다" : "다르다");
		
	}
	
}











