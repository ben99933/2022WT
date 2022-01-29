import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		Map<Long, Long>map = new HashMap<Long, Long>();
		long sum = 0;
		while(input.hasNext()) {
			long a,b;
			String string[] = input.next().split(":");
			a = Long.valueOf(string[0]);
			b = Long.valueOf(string[1]);
			map.put(a, b);
			if(a == 0 && b == 0)break;
		}
		while(input.hasNext()) {
			long a,b;
			String string[] = input.next().split(":");
			a = Long.valueOf(string[0]);
			b = Long.valueOf(string[1]);
			if(map.containsKey(a))sum += map.get(a) * b;
			if(a == 0 && b == 0)break;
		}
		System.out.println(sum);
		input.close();
	}
	
}
