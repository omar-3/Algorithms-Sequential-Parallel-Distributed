#pragma once

#define COUNT 10

template <class T>
class Tree {
	private:
		class Node {
			public:
				Node* left;
				Node* right;
				T value;
				Node (T value) {
					this->value = value;
				}
			};
	public:
		Node* root;
		int V;
		Tree(T&& rootValue) {
			Node* node(new Node(rootValue));
			this->root = std::move(node);
			this->V = 1;
		}
		Node* minValueNode(Node* node) {
			Node* current = node;
			while (current && current->left != nullptr) {
				current = current->left;
			}
			return current; 
		}

		void insert(const T&& value) {

			Node* currentNode, *fatherNode;
			currentNode = root;
			fatherNode = nullptr;
			Node* newNode(new Node(value));
			
			while (currentNode != nullptr) {
				fatherNode = currentNode;
				if (value < currentNode->value) {
					currentNode = currentNode->left;
				} else if (value > currentNode->value) {
					currentNode = currentNode->right;
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
			(this->V)++;
		}

		Node* del(Node* root, T value) {
			if (root == nullptr) { 
				return root;
			} else if (value < root->value) {
				root->left = del(root->left, value);
			} else if (value > root->value) {
				root->right = del(root->right, value);
			}
			else
			{
				if (root->left == nullptr && root->right == nullptr) {
					delete root;
					root = nullptr;
					return root;
				}
				else if (root->left == nullptr) {
					Node* temp = root;
					root = root->right;
					delete temp;
				}
				else if (root->right == nullptr) {
					Node* temp = root;
					root = root->left;
					delete temp;
				}
				else
				{
					Node* temp = minValueNode(root->right);		// this is a leaf node
					root->value = temp->value;
					root->right = del(root->right, temp->value);
				}
			}
			return root;
			
		}

		void Print(Node* root) {
			print2D(root, 0);
		}
};

