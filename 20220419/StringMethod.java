import java.util.Arrays;

public class StringMethod {

	public static void main(String[] args) {
		
		String str = "    tjoeunit    ";
//		length() 메소드는 문자열을 구성하는 문자의 개수를 얻어온다.
		System.out.println("문자열을 구성하는 문자의 개수: " + str.length());
		System.out.println("불필요한 공백 제거: " + str.trim());
		System.out.println("불필요한 공백 제거한 문자수: " + str.trim().length());
		
		str = "0304224185600";
//		charAt(index) 메소드는 인수로 지정된 index 번째 문자를 얻어온다. index는 0부터 시작된다.
//		charAt() 메소드는 문자열에 1글자만 꺼내기 때문에 실행 결과 데이터 타입은 char가 된다.
		System.out.println("성별: " + (str.charAt(6) % 2 == 1 ? "남자" : "여자"));
		
		str = "TjoeunIT";
//		toUpperCase() 메소드는 무조건 대문자로, toLowerCase() 메소드는 무조건 소문자로 변환한다.
		System.out.println("무조건 대문자로: " + str.toUpperCase());
		System.out.println("무조건 소문자로: " + str.toLowerCase());
		
		str = "0304224185600";
//		substring(a) 메소드는 문자열의 a번째 index 끝까지의 문자열을 얻어온다.
//		substring(a, b) 메소드는 문자열의 a번째 index 부터 b - 1번째 index 까지의 문자열을 얻어온다.
		System.out.println("주민번호 뒷자리: " + str.substring(6));
		System.out.println("년: " + str.substring(0, 2));
		System.out.println("월: " + str.substring(2, 4));
		System.out.println("일: " + str.substring(4, 6));
		
		str = "itTjoeunit";
//		indexOf() 메소드는 문자열의 왼쪽부터 검색해서 인수로 지정된 문자열이 최초로 나타나는 index를 얻어온다.
//		lastIndexOf() 메소드는 문자열의 오른쪽부터 검색해서 인수로 지정된 문자열이 최초로 나타나는 index를
//		얻어온다.
//		indexOf()나 lastIndexOf()를 실행한 결과가 0이상이면 인수로 지정된 값이 문자열에 포함됨을 의미한다.
		System.out.println(str.indexOf("it"));
		System.out.println(str.lastIndexOf("it"));
//		인수로 지정된 값이 문자열에 없으면 -1을 리턴한다.
		System.out.println(str.indexOf("IT"));
		
//		contains() 메소드는 문자열에 인수로 지정된 값이 포함되어있면 true, 없으면 false를 리턴한다.
		System.out.println(str.contains("it"));
		System.out.println(str.contains("IT"));
		
		str = "abc 123 가나다";
//		split("구분자") 메소드는 구분자를 경계로 문자열을 나눠서 배열로 리턴한다.
		System.out.println(str.split(" "));
		System.out.println(Arrays.toString(str.split(" ")));
		
	}
	
}









