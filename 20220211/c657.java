
import java.util.Scanner;



public class Test {
	
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		while (input.hasNext()) {
			char array[] = input.nextLine().toCharArray();
			int max = Integer.MIN_VALUE;
			int sequance = 0;
			char pre = array[0];
			char most = array[0];
			for(int i = 1;i<array.length;i++) {
				if(pre==array[i]) {
					sequance++;
					if(sequance > max) {
						max=sequance;
						most = array[i];
					}
				}else {
					sequance  = 0;
				}
				pre = array[i];
			}
			System.out.printf("%c %d\n",most,max+1);
		}
		input.close();
	}
	
}


