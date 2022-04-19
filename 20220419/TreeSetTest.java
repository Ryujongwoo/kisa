import java.util.TreeSet;

public class TreeSetTest {

	public static void main(String[] args) {
		
//		TreeSet은 중복되는 데이터의 입력을 허용하지 않는다.
//		데이터가 입력되는 순서와 실제 데이터가 저장되는 순서가 달라서 get(), set() 메소드가
//		제공되지 않는다.
//		TreeSet은 HashSet과 달리 데이터가 오름차순으로 정렬되서 저장된다.
		
		TreeSet<String> tset = new TreeSet<String>();
		
//		add(value): TreeSet에 value를 저장한다.
		tset.add("홍길동");
//		size(): TreeSet에 저장된 데이터의 개수를 얻어온다.
		System.out.println(tset.size() + ": " + tset);
		tset.add("임꺽정");
		System.out.println(tset.size() + ": " + tset);
		tset.add("장길산");
		System.out.println(tset.size() + ": " + tset);
		tset.add("일지매");
		System.out.println(tset.size() + ": " + tset);
		tset.add("홍길동"); // 중복되는 데이터는 입력되지 않는다.
		System.out.println(tset.size() + ": " + tset);
		
//		remove(value): TreeSet 저장된 value를 제거한다.
		tset.remove("임꺽정");
		System.out.println(tset.size() + ": " + tset);
		
//		clear(): TreeSet에 저장된 모든 데이터를 제거한다.
		tset.clear();
		System.out.println(tset.size() + ": " + tset);
		
	}
	
}


