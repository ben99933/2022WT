import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.Set;




public class Test {
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		Node nodes[] = new Node[n];
		for(int i = 0;i<n;i++) {
			nodes[i] = new Node(i+1);
		}
		for(int i = 0;i<n;i++) {
			nodes[i].next = nodes[input.nextInt()];
		}
		Set<Node>visitedSet = new HashSet<Node>();
		int count = 0;
		for(int i = 0;i<n;i++) {
			Node node = nodes[i];
			if(visitedSet.contains(node)) {
				continue;
			}else {
				Node focus = node;
				do {
					visitedSet.add(focus);
					focus = focus.next;
				}while(focus != node);
				count++;
			}
			
		}
		System.out.print(count);
		input.close();
	}
	
	
}
class Node{
	
	public int value;
	public Node next;
	public Node(int value) {
		this.value = value;
	}
	@Override
	public int hashCode() {
		return value;
	}
	public boolean equals(Object obj) {
		 return obj.hashCode() == this.hashCode();
	 }
	
}
