import java.util.Scanner;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		for(int time =1;time <=t;time++) {
			int target = input.nextInt();
			int n = input.nextInt();
			int array[] = new int[n];
			for(int i = 0;i<n;i++) {
				array[i] = input.nextInt();
			}
			boolean b = dfs(0, n, array, array[0], target) || dfs(0, n, array, 0, target);
			System.out.println(b == true ? "YES" : "NO");
		}
		
		input.close();
	}
	static boolean dfs(int layer,int n,int array[], int value,int target) {
		if(layer == n-1) {
			return value==target;
		}else {
			return dfs(layer+1, n, array, value+array[layer+1], target) ||  dfs(layer+1, n, array, value, target);
		}
	}
}


