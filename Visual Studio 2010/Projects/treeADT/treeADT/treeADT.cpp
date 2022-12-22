#include"treeADT.h"

//Member function to create the tree abstract data type
template<class elemType>
void CTreeADT<elemType>::crtTree()
{
	elemType dataIn;
	long int nodeAddr;
	STreeNode<elemType> *pTempNode;
	STreeNode<elemType> *pParentNode;
	std::stack<elemType> stackADT;

	//Add the root node
	pRootNode = new STreeNode<elemType>[1];
	std::cin >> dataIn;
	pRootNode->m_Data = dataIn;
	pRootNode->pLeftChild = NULL;
	pRootNode->pRightChild = NULL;
	stackADT.push((long int)pRootNode);

	while(!stackADT.empty())
	{
		nodeAddr = (long int)stackADT.top();
		pParentNode = (STreeNode<elemType> *)nodeAddr;
		std::cin >> dataIn;
		stackADT.pop();
		
		//Add left child
		if(dataIn != -1)
		{
			pTempNode = pParentNode;
			pTempNode->pLeftChild = new STreeNode<elemType>[1];
			pTempNode = pTempNode->pLeftChild;
			pTempNode->m_Data = dataIn;
			pTempNode->pLeftChild = NULL;
			pTempNode->pRightChild = NULL;
			stackADT.push((long int)pTempNode);
		}

		std::cin >> dataIn;
		if(dataIn != -1)
		{
			pTempNode = pParentNode;
			pTempNode->pRightChild = new STreeNode<elemType>[1];
			pTempNode = pTempNode->pRightChild;
			pTempNode->m_Data = dataIn;
			pTempNode->pLeftChild = NULL;
			pTempNode->pRightChild = NULL;
			stackADT.push((long int)pTempNode);
		}
	}
}
template void CTreeADT<int>::crtTree();

//Member function to check weather the tree is empty or not. returns true is empty else false.
template<class elemType>
bool CTreeADT<elemType>::isEmpty() const
{
	bool retVal;
	if(!pRootNode)
	{
		retVal = true;
	}
	else
	{
		retVal = false;
	}

	return retVal;
}

template bool CTreeADT<int>::isEmpty() const;

//Pre-order traversal of a tree
template<class elemType>
void CTreeADT<elemType>::preOrder() const
{
	STreeNode<elemType> *pTempNode = pRootNode;
	std::stack<elemType> stackADT;
	long int nodeAddr;

	while((!stackADT.empty()) || (pTempNode != NULL))
	{
		if(pTempNode)
		{
			std::cout << pTempNode->m_Data << " ";
			stackADT.push((long int)pTempNode);
			pTempNode = pTempNode->pLeftChild;
		}
		else
		{
			nodeAddr = (long int)stackADT.top();
			pTempNode = (STreeNode<elemType> *)nodeAddr;
			stackADT.pop();
			pTempNode = pTempNode->pRightChild;
		}
	}
}

template void CTreeADT<int>::preOrder() const;

template<class elemType>
void CTreeADT<elemType>::inOrder() const
{
	long int addrHolder;
	STreeNode<elemType> *pTempNode;
	std::stack <elemType> stackADT;
	pTempNode = pRootNode;
	while((!stackADT.empty()) || (pTempNode))
	{
		if(pTempNode)
		{
			stackADT.push((long int)pTempNode);
			pTempNode = pTempNode->pLeftChild;
		}
		else
		{
			addrHolder = (long int)stackADT.top();
			pTempNode = (STreeNode<elemType>* )addrHolder;
			std::cout << pTempNode->m_Data << " " ;
			stackADT.pop();
			pTempNode = pTempNode->pRightChild;
		}
	}
}

template void CTreeADT<int>::inOrder() const;

//Post-order traversal of a tree
template<class elemType>
void CTreeADT<elemType>::postOrder() const
{
	long int addrHolder;
	STreeNode<elemType> *pTempNode;
	std::stack <elemType> stackADT;
	pTempNode = pRootNode;
	while((!stackADT.empty()) || (pTempNode))
	{
		if(pTempNode)
		{
			stackADT.push((long int)pTempNode);
			pTempNode = pTempNode->pLeftChild;
		}
		else
		{
			addrHolder = (long int)stackADT.top();
			pTempNode = (STreeNode<elemType>* )addrHolder;
			if(pTempNode->pRightChild != NULL)
			{
				stackADT.push((long int)pTempNode);
				pTempNode = pTempNode->pRightChild;
			}
			else
			{
				std::cout << pTempNode->m_Data << " " ;
				stackADT.pop();
				addrHolder = (long int)stackADT.top();
				pTempNode = (STreeNode<elemType>* )addrHolder;
				pTempNode = pTempNode->pRightChild;
			}
		}
	}
}
template void CTreeADT<int>::postOrder() const;