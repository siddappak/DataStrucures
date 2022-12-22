#ifndef INT_PARAMS
#define INT_PARAMS
#include<iostream>
#include<conio.h>

template<class elemType>
struct STreeNode
{
	elemType m_Data;
	STreeNode<elemType> *pLeftChild;
	STreeNode<elemType> *pRightChild;
};

#endif