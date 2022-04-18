
public class WhileTest {

	public static void main(String[] args) {

//		반복으로 최초 진입시 조건이 거짓이면 {} 블록을 1번도 실행하지 않는다.
//		while (조건식) {
//			반복할 문장;
//			...;
//		}
		
		int i = 0;
		int sum = 0;
		while (i > 10) {
			sum += ++i;
		}
		System.out.println(sum);
		
//		반복으로 최초 진입시 조건이 거짓이더라도 {} 블록을 1번은 실행한다.
//		do {
//			반복할 문장;
//			...;
//		} while (조건식);
		
		int j = 0;
		int total = 0;
		do {
			total += ++j;
		} while (j > 10);
		System.out.println(total);
		
	}
	
}
