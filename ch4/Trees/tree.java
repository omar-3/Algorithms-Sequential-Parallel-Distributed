class Node <T extends Comparable<T>> implements Comparable<Node<T>>{
	public Node<T> left;
	public Node<T> right;
	public T value;
	public Node(T value) {
		this.value = value;
		this.left = null;
		this.right = null;
	}
	@Override
	public int compareTo(Node<T> t){
		return this.value.compareTo(t.value);
	}
}

public class tree<T extends Comparable<T>> {
	public static final int COUNT = 10;
	public Node<T> root;
	public int V;
	public tree(T value) {
		this.root = new Node<T>(value);
		this.V++;
	}
	public Node<T> minValueNode(Node<T> node) {
		Node<T> current = node;
		while (current != null && current.left != null) {
			current = current.left;
		}
		return current;
	}
	public void  insert(T value) {
		Node<T> currentNode, fatherNode;
		currentNode = this.root;
		fatherNode = null;
		Node<T> newNode = new Node<T>(value);
		while (currentNode != null) {
			fatherNode = currentNode;
			if (newNode.compareTo(currentNode) < 0) {
				currentNode = currentNode.left;
			} else if (newNode.compareTo(currentNode) > 0) {
				currentNode = currentNode.right;
			} else {
				System.out.println(String.format("The Value %d cannot be inserted multiple times", value));
				return;
			}
		}
		if (fatherNode.compareTo(newNode) > 0) {
			fatherNode.left = newNode;
		} else {
			fatherNode.right = newNode;
		}
		this.V++;
	}
	public Node<T> del(Node<T> root, T value) {
		if (root == null) {
			return root;
		} else if (root.compareTo(new Node<T>(value)) > 0 ) {
			root.left = del(root.left, value);
		} else if (root.compareTo(new Node<T>(value)) < 0 ) {
			root.right = del(root.right, value);
		} else {
			if (root.left == null && root.right == null) {
				root = null;
				return root;
			} else if (root.left == null) {
				Node<T> temp = root;
				root = root.right;
				temp = null;
			} else if (root.right == null) {
				Node<T> temp = root;
				root = root.left;
				temp = null;
			} else {
				Node<T> temp = this.minValueNode(root.right);
				root.value = temp.value;
				root.right = del(root.right, temp.value);
			}
		}
		return root;
	}
	public void print2D(Node<T> root, int space) {
		if (root == null) return;
		space += COUNT;
		print2D(root.right, space);
		System.out.println("");
		for (int i = COUNT; i < space; i++) System.out.print(" ");
		System.out.println(String.format("%d", root.value));
		print2D(root.left, space);
	}
	public void Print(Node<T> root) {
		print2D(root, 0);
	}

}
