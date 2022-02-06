
import java.math.BigDecimal;
import java.util.Scanner;


public class Test {
	
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		
		int n = input.nextInt();
		for(int i = 0;i<n;i++) {
			BigDecimal a = new BigDecimal(input.next());
			BigDecimal b = new BigDecimal(input.next());
			System.out.println(a.subtract(b).toString());
		}
		
		input.close();
	}
	
}


