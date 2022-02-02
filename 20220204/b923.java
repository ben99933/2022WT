import java.util.Scanner;
import java.util.Stack;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		Stack<Integer> stack = new Stack<Integer>();
		for(int t = 1;t<=n;t++) {
			int command = input.nextInt();
			switch (command) {
			case 1:
				stack.pop();
				break;
			case 2:
				System.out.println(stack.lastElement());
				break;
			case 3:
				stack.push(input.nextInt());
				break;
			default:
				break;
			}
		}
		input.close();
	}
	
}

