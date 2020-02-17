//#pragma once
#include <memory>
#include <stack>
#include <iostream>

template <class T>
class Tree {
	private:
		class Node {
			public:
				std::unique_ptr<Node> left;
				std::unique_ptr<Node> right;
				T value;
				Node (T value) {
					this->value = value;
				}
			};
	public:
		std::unique_ptr<Node> root;
		int V;
		Tree(T&& rootValue) {
			std::unique_ptr<Node> node(new Node(rootValue));
			this->root = std::move(node);
			this->V = 1;
		}
		Node<T>* minValueNode(Node<T>* node) {
			Node<T>* current = node;
			while (current && current->left != nullptr) {
				current = current->left;
			}
			return current; 
		}
		void insert(const T&& value) {

			Node* currentNode, *fatherNode;
			currentNode = root.get();
			fatherNode = nullptr;
			std::unique_ptr<Node> newNode(new Node(value));
			
			while (currentNode != nullptr) {
				fatherNode = currentNode;
				if (value < currentNode->value) {
					currentNode = currentNode->left.get();
				} else if (value > currentNode->value) {
					currentNode = currentNode->right.get();
				} else { 
					std::cout << "The Value " << value << " cannot be inserted multiple times" << std::endl; 
					return; 
				}
			}
			
			if (fatherNode->value > value) {
				fatherNode->left = std::move(newNode);
			} else {
				fatherNode->right = std::move(newNode);
			}

			this->V = this->V + 1;
		}

		Node<T>* del(Node<T>* root, T key) {
			if (root == nullptr) { return root; }
			if (key < root->key) { root->left = del(root->left.get(), key); }
			else { root->right = del(root->right.get(), key); }
			
		}


		void inorder(Node* node) {
			if (node == nullptr) { return; }
			inorder(node->left.get());
			std::cout << node->value << std::endl;
			inorder(node->right.get());
		}
};

int main() {
	Tree<int> BST(50);
	BST.insert(100);
	BST.insert(120);
	BST.insert(10);
	BST.insert(38);
	BST.insert(80);
	BST.insert(1002);
	BST.insert(120);
	BST.inorder(BST.root.get());
}
