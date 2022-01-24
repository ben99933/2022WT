
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		long n = input.nextLong();
		Map<Long, Long> map = new HashMap<Long, Long>();
		List<Long>list = new LinkedList<Long>();
		for(long i = 2;i<=n;i++) {
			long count = 0;
			while(n%i==0) {
				count++;
				n/=i;
			}
			if(count != 0) {
				map.put(i, count);
				list.add(i);
			}
			
		}
		
		int len = map.size();
		for(int i = 0;i<len;i++) {
			long l = list.get(i);
			long exp = map.get(l);
			if(i != 0) {
				System.out.print("* ");
				
			}
			if(exp ==1) {
				System.out.print(l + " ");
			}else {
				System.out.print(l + "^" + exp + " ");
			}
		}
		
		input.close();
	}
	
}
