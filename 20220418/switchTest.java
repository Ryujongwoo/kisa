import java.util.Scanner;

public class switchTest {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("3과목 점수를 입력하세요: ");
		int java = scanner.nextInt();
		int c = scanner.nextInt();
		int python = scanner.nextInt();
		
		int total = java + c + python;
		double average = (double) total / 3;
		System.out.printf("총점: %3d, 평균: %6.2f\n", total, average);
		
		if (average >= 90) {
			System.out.println("A");
		} else if (average >= 80) {
			System.out.println("B");
		} else if (average >= 70) {
			System.out.println("C");
		} else if (average >= 60) {
			System.out.println("D");
		} else {
			System.out.println("F");
		}
		System.out.println("====================");
		
//		key에는 정수 또는 연산 결과가 정수인 수식, JDK 1.7 버전부터 문자열도 가능하다.
//		switch (key) {
//			case value:
//				key와 value가 일치할 경우 실행할 문장;
//				...
//				[break;]
//			....
//			[default: // 기타 등등 케이스
//				key와 일치하는 value가 없을 경우 실행할 문장;
//				break;]
//		}
		
		switch ((int) average / 10) {
			case 10:
				System.out.println("참 잘했어요!!!");
//				System.out.println("A");
//				break;
			case 9:
				System.out.println("A");
				break;
			case 8:
				System.out.println("B");
				break;
			case 7:
				System.out.println("C");
				break;
			case 6:
				System.out.println("D");
				break;
//			case 5: case 4: case 3: case 2: case 1: case 0:
			default:
				System.out.println("F");
				break;
		}
		
	}
	
}





