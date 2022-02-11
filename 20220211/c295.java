
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int m = input.nextInt();
		int array[][] = new int[n][m];
		for(int i = 0;i<n;i++) {
			for(int j = 0;j<m;j++) {
				array[i][j] = input.nextInt();
			}
		}
		ArrayList<Integer>list = new ArrayList<Integer>(n);
		int sum = 0;
		for(int i = 0;i<n;i++) {
			int max = Integer.MIN_VALUE;
			for(int j = 0;j<m;j++) {
				if(array[i][j] > max) {
					max = array[i][j];
				}
			}
			list.add(max);
			sum += max;
		}
		System.out.println(sum);
		boolean canDivid = false;
		int time = 1;
		for(int i = 0;i<n;i++) {
			if(sum % list.get(i) == 0) {
				canDivid = true;
				if(time == 1)System.out.print(list.get(i));
				else System.out.print(" " + list.get(i));
				time++;
			}
		}
		if(!canDivid){
			System.out.print("-1");
		}
		input.close();
	}
	
}
