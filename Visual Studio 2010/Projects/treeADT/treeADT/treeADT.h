#ifndef TREE_ADT
#define TREE_ADT

#include "interfaceParams.h"
#include "Interfaces.h"
#include <stack>

template<class elemType>
class CTreeADT : public InterfaceTreeADT<elemType>
{
public:
	//default Constructor
	CTreeADT();

	//Constructor
	CTreeADT(STreeNode<elemType> *tNode);

	//Copy constructor of the class
	//Post-condition : Root node will be initialized with the reference of the argument class
	CTreeADT(const CTreeADT& objRef);

	//Member function to overload the assignment operator
	//Post-condition : Root node of the class will be initialized with the reference of the input class
	CTreeADT<elemType>* operator = (const CTreeADT<elemType> *rObjRef);

	//Function to create the tree data structure
	void crtTree();

	//Function to check weather tree is empty or not
	bool isEmpty() const;

	//Pre-order traversal of a tree
	void preOrder() const;

	//In-order traversal of a tree
	void inOrder() const;

	//Post-order traversal of a tree
	void postOrder() const;

	//Level-order traversal of a tree
	void levelOrder() const{};

	//Function to search for a key in the tree
	bool searchKey() const{return true;};

	//Destructor
	~CTreeADT(){};

private:
	STreeNode<elemType> *pRootNode;
};

#endif