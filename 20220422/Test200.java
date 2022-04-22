
public class Test200 {

	public static void main(String[] args) {
		
		int a = 5, b = 9, c;
		
		c = b % 5 < 5 ? 1 : 0; // c = 1
		System.out.println(c << 3); // 8
		c = c | c << 3; // 0001 | 1000 => 1001 => 9, c = 9
		c = a < 5 || c >= 10 ? c - a : c + a; // c = 14
		System.out.printf("%d", c);
		
	}
	
}
