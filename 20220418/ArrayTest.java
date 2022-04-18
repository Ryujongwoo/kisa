import java.util.Arrays;

public class ArrayTest {

	public static void main(String[] args) {
		
//		배열: 같은 이름으로 여러개의 기억장소를 만든다. 기억장소 구분은 인덱스를 이용한다.
//		자료형[] 배열명 = new 자료형[배열의 크기]; // 지정한 크기만큼 기억장소를 가지는 배열을 만든다.
//		자료형 배열명[] = new 자료형[배열의 크기]; // 배열의 각 요소는 자동 초기화가 실행된다.
//		배열을 선언만 하면 숫자는 0, 문자는 공백, boolean은 false, 클래스로 만든 배열은 null로 초기화 된다.
		
		int[] a = new int[5];
		System.out.println(Arrays.toString(a));
		double[] b = new double[5];
		System.out.println(Arrays.toString(b));
		char[] c = new char[5];
		System.out.println(Arrays.toString(c));
		String[] d = new String[5];
		System.out.println(Arrays.toString(d));
		
//		자료형[] 배열명 = {초기치}; // 초기치의 개수만큼 배열을 만들고 초기치로 초기화 한다.
//		자료형 배열명[] = {초기치};
		
		String[] str = {"홍길동", "임꺽정", "장길산", "일지매"};
		System.out.println(Arrays.toString(str));
		
		System.out.println(str[0]);
		System.out.println(str[1]);
		System.out.println(str[2]);
		System.out.println(str[3]);
		
//		배열명.length: 배열의 크기를 얻어온다.
		System.out.println(str.length);
		for (int i=0; i<str.length; i++) {
			System.out.println(str[i]);
		}
		
//		str 배열에 0번째 인덱스의 값 부터 마지막 인덱스의 값 까지 차례대로 변수 s에 저장되며 반복한다.
		for (String s : str) {
			System.out.println(s);
		}
		
	}
	
}






