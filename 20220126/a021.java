
import java.math.BigInteger;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String string1 = input.next();
		String operator = input.next();
		String string2 = input.next();
		BigInteger a = new BigInteger(string1);
		BigInteger b = new BigInteger(string2);
		BigInteger c = null;
		switch (operator) {
		case "+":
			c = a.add(b);
			break;
		case "-":
			c = a.subtract(b);
			break;
		case "*":
			c = a.multiply(b);
			break;
		case "/":
			c = a.divide(b);
			break;
		default:
			break;
		}
		System.out.print(c.toString());
		input.close();
	}
	
}
