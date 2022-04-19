import java.util.ArrayList;

public class ArrayListTest {

	public static void main(String[] args) {
		
//		배열은 한 번 선언하면 프로그램에서 크기를 변경해 사용할 수 없다.
		int[] data = new int[10];
		
		for (int i=0; i<10; i++) {
			data[i] = i + 1;
		}
		for (int i=0; i<10; i++) {
			// System.out.printf("data[%02d] = %2d\n", i, data[i]);
			// String.format() 메소드는 문자열의 출력 서식을 지정한다.
			System.out.println(String.format("data[%02d] = %2d", i, data[i]));
		}
		
		for (int i=10; i<20; i++) {
			// data[i] = i + 1; // 배열의 인덱스가 배열의 크기를 벗어나서 예외가 발생된다.
		}
		
//		ArrayList는 데이터가 삽입되면 자동으로 크기가 커지고 데이터가 제거되면 자동으로 크기가 작아진다.
//		중간에 데이터가 삽입되면 삽입되는 위치부터 모든 데이터가 뒤로 이동되고 중간의 데이터가 제거되면
//		제거된 데이터 다음 위치의 모든 데이터가 앞으로 이동된다. => python의 list와 같은 기능을 실행한다.
		
//		<E> => 제네릭이라 부르며 ArrayList에 저장할 데이터의 타입을 반드시 클래스로 적어야 한다.
//		ArrayList에 기본 자료형 데이터를 저장하려면 기본 자료형을 클래스화 시켜놓은 랩퍼 클래스를 사용한다.
//		랩퍼 클래스는 기본 자료형 첫 문자만 대문자로 변경한다. 단 char는 Character로 int는 Integer로 쓴다.
		
//		ArrayList arrayList = new ArrayList(); // JDK 1.4 까지
		ArrayList<Integer> arrayList = new ArrayList<Integer>(); // JDK 1.5 부터
//		ArrayList<Integer> arrayList = new ArrayList(); // JDK 1.7 부터
		
		for (int i=0; i<10; i++) {
			arrayList.add(i + 1);
		}
		for (int i=0; i<10; i++) {
			System.out.println(arrayList.get(i));
		}
		
		for (int i=10; i<20; i++) {
			arrayList.add(i + 1);
		}
		for (int i=10; i<20; i++) {
			System.out.println(arrayList.get(i));
		}
		
	}
	
}











