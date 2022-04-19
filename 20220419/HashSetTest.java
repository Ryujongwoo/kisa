import java.util.HashSet;

public class HashSetTest {

	public static void main(String[] args) {
		
//		HashSet은 중복되는 데이터의 입력을 허용하지 않는다.
//		데이터가 입력되는 순서와 실제 데이터가 저장되는 순서가 달라서 get(), set() 메소드가
//		제공되지 않는다.
		
		HashSet<String> hset = new HashSet<String>();
		
//		add(value): HashSet에 value를 저장한다.
		hset.add("홍길동");
//		size(): HashSet에 저장된 데이터의 개수를 얻어온다.
		System.out.println(hset.size() + ": " + hset);
		hset.add("임꺽정");
		System.out.println(hset.size() + ": " + hset);
		hset.add("장길산");
		System.out.println(hset.size() + ": " + hset);
		hset.add("일지매");
		System.out.println(hset.size() + ": " + hset);
		hset.add("홍길동"); // 중복되는 데이터는 입력되지 않는다.
		System.out.println(hset.size() + ": " + hset);
		
//		remove(value): HashSet 저장된 value를 제거한다.
		hset.remove("임꺽정");
		System.out.println(hset.size() + ": " + hset);
		
//		clear(): HashSet에 저장된 모든 데이터를 제거한다.
		hset.clear();
		System.out.println(hset.size() + ": " + hset);
		
	}
	
}


