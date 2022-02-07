
import java.util.Scanner;



public class Test {
	
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		String array[] = input.nextLine().split("\\s+");
		for(int i = 1;i<array.length;i++) {
			if(i != array.length-1) {
				System.out.print(array[i] + " " + array[0] + " ");
			}else {
				System.out.println(array[i]);
			}
		}
		input.close();
	}
	
}


