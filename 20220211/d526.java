import java.util.Scanner;

public class Test {

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			int n = input.nextInt();
			Node nodes[] = new Node[n];
			Node root = null;
			for(int i = 0;i<n;i++) {
				nodes[i] = new Node(input.nextInt());
			}
			root = nodes[0];
			for(int i = 1;i<n;i++) {
				root.addNode(nodes[i]);
			}
			Node.preOrder(root);
			System.out.print("\n");
		}
		
		input.close();
	}
	
	
}
class Node{
	
	public int value;
	public Node left;
	public Node right;
	public Node(int value) {
		this.value = value;
	}
	public void addNode(Node node) {
		if(node.value > this.value) {
			if(this.right == null)this.right = node;
			else {
				this.right.addNode(node);
			}
		}else if(node.value <= this.value) {
			if(this.left == null)this.left = node;
			else {
				this.left.addNode(node);
			}
		}
	}
	public static void preOrder(Node node) {
		System.out.print(node.value + " ");
		if(node.left != null)preOrder(node.left);
		if(node.right != null)preOrder(node.right);
	}
	@Override
	public int hashCode() {
		return value;
	}
	
}

