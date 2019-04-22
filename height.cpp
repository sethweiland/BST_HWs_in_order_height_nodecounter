#include "tree.hpp"
#include "treenode.hpp"
#include <string>
#include <algorithm>
#include <iostream>
int node_counter_recursive(const TreeNode<std::string> *root)
{
    unsigned int count = 1;
    if (root->leftPtr != NULL) {
       count += node_counter_recursive(root->leftPtr);
    }
    if (root->rightPtr != NULL) {
        count += node_counter_recursive(root->rightPtr);
    }
    return count;
}

int height( TreeNode<std::string>* root) {
	if(root==nullptr) {return 0;}
	return std::max(height(root->leftPtr), height(root->rightPtr) )+1;
}
int main () {
	Tree<std::string> tree;
	tree.insertNode("acacia");
	tree.insertNode("brett");
	tree.insertNode("cat");
	tree.insertNode("Dale");
	tree.insertNode("Evan");
	tree.insertNode("frank");
	tree.insertNode("Geoff");	
	
	tree.inOrderTraversal();
	
	int height_1 = height(tree.rootPtr);
	std::cout<<"\n"<<height_1<<"\n";
	//find number of nodes in the tree	
	//int count = node_counter_recursive(tree.rootPtr);
	//std::cout<<"\n"<<count<<"\n";
}
