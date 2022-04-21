
public class ScoreTest {

	public static void main(String[] args) {
		
		ScoreVO score1 = new ScoreVO("홍길동", 100, 100, 99);
		System.out.println(score1);
		ScoreVO score2 = new ScoreVO("임꺽정", 75, 81, 83);
		System.out.println(score2);
		ScoreVO score3 = new ScoreVO("장길산", 58, 47, 66);
		System.out.println(score3);
	
		System.out.println("score1.count: " + score1.count);
		score2.count = 100;
		System.out.println("score2.count: " + score2.count);
		System.out.println("score3.count: " + score3.count);
		System.out.println("score1.count: " + score1.count);
		
		System.out.println(Math.PI);
		System.out.println(ScoreVO.PI);
		// 상수를 변경하려 했으므로 에러가 발생된다.
		// ScoreVO.PI = 1.23456; // 에러
		
	}
	
}
