//	부모(상위, 슈퍼, 기반) 클래스
public class Parent {

	private String name;
	private boolean gender;
	
	public Parent() {
		// TODO Auto-generated constructor stub
	}
	public Parent(String name, boolean gender) {
		this.name = name;
		this.gender = gender;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public boolean isGender() {
		return gender;
	}
	public void setGender(boolean gender) {
		this.gender = gender;
	}
	
	@Override
	public String toString() {
		return "Parent [name=" + name + ", gender=" + gender + "]";
	}
	
}
