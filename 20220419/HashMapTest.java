import java.util.HashMap;

public class HashMapTest {

	public static void main(String[] args) {
		
//		HashMap은 사전식으로 데이터를 저장한다. key에 value를 할당하는 방식으로 저장한다.
//		key는 일반적으로 String 타입으로 하고 value는 저장할 데이터 타입으로 만든다.
		
		HashMap<String, Integer> hmap = new HashMap<String, Integer>();
		
//		put(key, value): HashMap에 key에 value를 할당해서 저장한다.
		hmap.put("apple", 1000);
//		size(): HashMap에 저장된 데이터의 개수를 얻어온다.
		System.out.println(hmap.size() + ": " + hmap);
		hmap.put("banana", 2000);
		System.out.println(hmap.size() + ": " + hmap);
		hmap.put("orange", 3500);
		System.out.println(hmap.size() + ": " + hmap);
		hmap.put("melon", 10000);
		System.out.println(hmap.size() + ": " + hmap);
		hmap.put("mango", 5000);
		System.out.println(hmap.size() + ": " + hmap);
		
//		HashMap에 저장된 데이터를 수정하려면 put(key, value) 메소드를 사용해서 수정한다.
//		put() 메소드로 없는 key에 할당하면 데이터가 저장되고 있는 key에 할당하면 그 key에 해당되는
//		데이터가 수정된다.
		hmap.put("orange", 50000);
		System.out.println(hmap.size() + ": " + hmap);
		
//		get(key): HashMap에 저장된 key에 할당된 데이터를 얻어온다.
		System.out.println(hmap.get("orange"));
		
//		remove(key): HashMap에 저장된 key와 key에 할당된 데이터를 제거한다.
		hmap.remove("orange");
		System.out.println(hmap.size() + ": " + hmap);
		
		System.out.println("===================================================");
		
//		keySet(): HashMap저장된 key만 얻어온다.
		System.out.println(hmap.keySet());
//		values(): HashMap저장된 value만 얻어온다.
		System.out.println(hmap.values());
		
		System.out.println("===================================================");
		
//		clear(): HashMap에 저장된 모든 데이터를 제거한다.
		hmap.clear();
		System.out.println(hmap.size() + ": " + hmap);
		
	}
	
}






