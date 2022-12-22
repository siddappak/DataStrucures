#include "treeADT.h"

//Default constructor
template<class elemType>
CTreeADT<elemType>::CTreeADT()
{
	pRootNode = NULL;
}
template CTreeADT<int>::CTreeADT();

//Parameterized constructor
template<class elemType>
CTreeADT<elemType>::CTreeADT(STreeNode<elemType> *pRtNode)
{
	pRootNode = pRtNode;
}
template CTreeADT<int>::CTreeADT(STreeNode<int> *pRtNode);

//Copy constructor
template<class elemType>
CTreeADT<elemType>::CTreeADT(const CTreeADT<elemType>& rTreeObj)
{
	pRootNode = rTreeObj.pRootNode;
}
template CTreeADT<int>::CTreeADT(const CTreeADT<int>& rTreeObj);

//Overloading assignment operator
template<class elemType>
CTreeADT<elemType>* CTreeADT<elemType>::operator = (const CTreeADT<elemType> *rObjRef)
{
	if(this != rObjRef)
	{
		pRootNode = rObjRef->pRootNode;
	}

	return this;
}
template CTreeADT<int>* CTreeADT<int>::operator = (const CTreeADT<int> *rObjRef);