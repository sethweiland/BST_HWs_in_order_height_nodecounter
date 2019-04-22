#include "tree.hpp"
#include "treenode.hpp"
#include <string>

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
	//find number of nodes in the tree	
	int count = node_counter_recursive(tree.rootPtr);
	std::cout<<"\n"<<count<<"\n";
}
