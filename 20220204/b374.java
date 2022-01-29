import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.Set;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		Map<Integer, Integer>map = new HashMap<Integer, Integer>();
		int max = Integer.MIN_VALUE;
		List<Integer>maxs = new LinkedList<Integer>();
		for(int i = 0;i<n;i++) {
			int a = input.nextInt();
			if(map.containsKey(a)) {
				int amount = map.get(a);
				map.replace(a, amount+1);
				if(amount+1 >= max) {
					if(amount+1 > max)max = amount+1;
					if(!maxs.contains(a))maxs.add(a);
				}
			}else {
				map.put(a, 1);
				if(1 > max) {
					max = 1;
					maxs.add(a);
				}
			}
		}
		Collections.sort(maxs);
		Iterator<Integer>iterator = maxs.iterator();
		while(iterator.hasNext()) {
			int a = iterator.next();
			int amount = map.get(a);
			if(amount == max)System.out.println(a + " " + amount);
		}
		input.close();
	}
	
}
