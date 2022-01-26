import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		Node[] nodes = new Node[n];
		for(int i = 0;i<n;i++) {
			int x = input.nextInt();
			int y = input.nextInt();
			nodes[i] = new Node(x, y);
		}
		int max = Integer.MIN_VALUE;
		int maxA = -1;
		int maxB = -1;
		for(int i = 0;i<n-1;i++) {
			for(int j = i+1;j<n;j++) {
				int d = Node.dis2(nodes[i], nodes[j]);
				if(max < d) {
					max = d;
					maxA = i;
					maxB = j;
				}
			}
		}
		System.out.print(maxA + " " + maxB);
		input.close();
	}
	
	
}
class Node{
	public int x;
	public int y;
	public Node(int x,int y) {
		this.x = x;
		this.y = y;
	}
	public static int dis2(Node a,Node b) {
		int dx = a.x-b.x;	
		int dy = a.y-b.y;
		return dx * dx + dy * dy;
	}
	
}
