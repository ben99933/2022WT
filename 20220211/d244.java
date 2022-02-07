
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.Map.Entry;



public class Test {
	
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		Map<String, Integer>map = new HashMap<String, Integer>();
		String array[] = input.nextLine().split(" ");
		for(int i = 0;i<array.length;i++) {
			if(map.containsKey(array[i])) {
				map.replace(array[i], map.get(array[i])+1);
			}else {
				map.put(array[i], 1);
			}
		}
		Iterator<Entry<String, Integer>> iterator = map.entrySet().iterator();
		while(iterator.hasNext()) {
			Entry<String, Integer> entry = iterator.next();
			if(entry.getValue() % 3 != 0) {
				System.out.println(entry.getKey());
				break;
			}
		}
		input.close();
	}
	
	
}


