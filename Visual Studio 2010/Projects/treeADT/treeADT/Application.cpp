#include "treeADT.h"

int main()
{
	CTreeADT<int> treeObj;
	treeObj.crtTree();
	
	std::cout << "Pre-order traversal of a given tree is: ";
	treeObj.preOrder();

	std::cout << "\nIn-order traversal of a given tree is : ";
	treeObj.inOrder();

	std::cout << "\nPost-order traversal of a tree is : ";
	treeObj.postOrder();

	_getch();
	return 0;
}