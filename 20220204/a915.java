
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		List<Pair>list = new LinkedList<Pair>();
		for(int i = 0;i<n;i++) {
			list.add(new Pair(input.nextInt(), input.nextInt()));
		}
		Comparator<Pair> comparator = new Comparator<Pair>() {
			@Override
			public int compare(Pair o1, Pair o2) {
				return -o1.compareTo(o2);
			}
		};
		Collections.sort(list, comparator);
		for (Pair pair : list) {
			System.out.printf("%d %d\n", pair.first, pair.second);
		}
		input.close();
	}
}
class Pair implements Comparable<Pair>{
	public int first;
	public int second;
	public Pair(int first,int second) {
		this.first = first;
		this.second = second;
	}
	@Override
	public int compareTo(Pair o) {
		// TODO 自動產生的方法 Stub
		if(this.first > o.first) {
			return -1;
		}else if(this.first == o.first) {
			if(this.second > o.second) {
				return -1;
			}else if(this.second == o.second) {
				return 0;
			}else return 1;
		}
		return 1;
	}
}
