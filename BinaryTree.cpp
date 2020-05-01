#include "pch.h"
#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>

using namespace std;
BinaryTree::BinaryTree()
{
}
BinaryTree::~BinaryTree()
{
	DelBinaryTree(&root);
}
void BinaryTree::DelBinaryTree(TreeNode* current)
{
	if(current->getLeft()!=nullptr)DelBinaryTree(current->getLeft());
	if(current->getRight()!=nullptr)DelBinaryTree(current->getRight());
	free(current);
}

BinaryTree::BinaryTree(int value)
{
}
void BinaryTree::Insert(int value)
{
	cout << "element  " << value << " path ";
	if (root.getData() == NULL) root.setData(value);
	else Insert(value, &root);	
}

TreeNode* BinaryTree::Search(int value)
{
	return Search(value, &root);
	
}
void BinaryTree::Insert(int value, TreeNode* current)
{			
			cout << current->getData() << "  ";
			if (value < current->getData())
			{
				if (current->getLeft() == nullptr)
				{
					current->setLeft(value);
				}
				else Insert(value, current->getLeft());
			}
			else
			{
				if (current->getRight() == nullptr)
				{
					current->setRight(value);
				}
				else Insert(value, current->getRight());
			}

		cout << endl;
}
TreeNode* BinaryTree::Search(int value, TreeNode* current)
{
	if (current->getData() == value) return current;
	else if (value < current->getData()) 
		Search(value, current->getLeft());
	else  Search(value, current->getRight());
}
void BinaryTree::CreateMinimalBST(int* pBegin, int Begin, int End)
{
	int* currentE = pBegin;
	int* currentB = pBegin;	
	while (*currentE != End)
	{
		currentE++;
	}
	while (*currentB != Begin)
	{
		currentB++;
	}
	int Size = currentE - currentB + 1;
	int* current2 = currentB;
	for (int i = 0; i < (Size / 2); i++)
	{
		++current2;
	}
	Insert(*current2);
	if (Size == 1) return;
	int* current = current2;
	int* currentLeft = --current2;
	int* currentRight = current2+2;
    if(current!=currentE) CreateMinimalBST(pBegin, *currentRight, *currentE);
    if(current!=currentB)CreateMinimalBST(pBegin, *currentB, *currentLeft);
}