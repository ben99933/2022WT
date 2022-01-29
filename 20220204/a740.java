
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int sum;
		while(input.hasNext()){
	
			int n=input.nextInt();
			sum=0;
			while(n%2==0){		
				sum+=2;
				n/=2;		
			}
			while(n%3==0){
				sum+=3;
				n/=3;
			}
			while(n%5==0){
				sum+=5;
				n/=5;
			}
			for(int i=6;i<=Math.sqrt(n);i+=6){
				while(n%(i-1)==0){
					sum+=i-1;
					n/=i-1;
				}
				while(n%(i+1)==0){
					sum+=i+1;
					n/=i+1;				
				}	
			}
			if(n!=1)sum+=n;		
			System.out.print(sum+"\n");
		}
		
		
		input.close();
	}
}
