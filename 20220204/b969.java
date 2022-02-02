
import java.util.Scanner;


public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		String[] name = input.nextLine().split("\\s+");
		String string = input.nextLine();
		for(int i = 0;i<name.length;i++) {
			System.out.println(string + ", " + name[i]);
		}
		input.close();
	}
	
}

