#ifndef INT_CLASSS_DEF
#define INT_CLASSS_DEF

template<class elemType>
class InterfaceTreeADT
{
public:
	//Contructor
	InterfaceTreeADT(){};

	//Member function to create tree data structure
	//Post-condition : Tree should be created with '"pRootNode" pointing to the starting point of the tree
	void crtTree();

	//Memebr function to check weather the tree is empty or not
	//Post-condition : returns true if tree is empty else returns false
	virtual bool isEmpty() const = 0;

	//Member function to compute the pre-order traversal of a tree
	//Post-conditon : Prints the pre-order traversal of a tree
	virtual void preOrder() const = 0;

	//Member function to compute the inorder traversal of a tree
	//Post-condition : Prints the in-order traversal of a tree
	virtual void inOrder() const = 0;

	//Member function to compute the post order traversal of a tree
	//Post-condition : Prints the post-order traversal of a tree
	virtual void postOrder() const = 0;

	//Member function to compute the level order traversal of a tree
	//Post-condition : Prints the level order traversal of a tree
	virtual void levelOrder() const = 0;

	//Member function to search for perticular key in the tree
	//Post-consition : Returns true if key is found else returns false
	virtual bool searchKey() const = 0;

	//Virtual destructor
	virtual ~InterfaceTreeADT() = 0;

private:
	//Copy contructor.
	InterfaceTreeADT(const InterfaceTreeADT<elemType>& intObjRef);

	//Assignment operator overloading
	InterfaceTreeADT<elemType>* operator = (const InterfaceTreeADT<elemType>& intObjRef);
};
#endif