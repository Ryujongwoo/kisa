
public class InheritanceTest {

	public static void main(String[] args) {
		
		Parent parent = new Parent("홍길동", true);
		System.out.println(parent.toString());
		System.out.println(parent);
		
		Child child = new Child("성춘향", false, 16, "이쁜이");
		System.out.println(child);
		
	}
	
}
