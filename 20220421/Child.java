//	자식(하위, 서브, 파생)
//	Child 클래스는 Parent 클래스를 상속받아 만든다.
//	자바는 다중 상속을 허용하지 않는다.
public class Child extends Parent {

//	Child 클래스는 Parent 클래스의 모든 필드와 메소드를 별도의 선언없이 사용할 수 있다.
//	Child 클래스에서 필요한 기능을 정의한다.
	
	private int age;
	private String nickname;
	
	public Child() {
		
	}
	public Child(String name, boolean gender, int age, String nickname) {
//		부모 클래스로 부터 상속받은 필드의 접근 권한이 private일 경우 자식 클래스에서도 접근할 수 없다.
//		부모 클래스로 부터 상속받은 private 권한의 필드는 부모 클래스의 생성자를 호출해서 초기화시킨다.
		super(name, gender);
		this.age = age;
		this.nickname = nickname;
	}
	
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getNickname() {
		return nickname;
	}
	public void setNickname(String nickname) {
		this.nickname = nickname;
	}
	
	@Override
	public String toString() {
//		super.toString(): 부모 클래스의 toString() 메소드를 실행한다.
		return super.toString() + " Child [age=" + age + ", nickname=" + nickname + "]";
	}
	
}










