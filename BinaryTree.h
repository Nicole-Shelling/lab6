#pragma once
#include "TreeNode.h"
class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void DelBinaryTree(TreeNode* current);
	BinaryTree(int value);
	void Insert(int value);
	TreeNode* Search(int value);
	void CreateMinimalBST(int* pBegin, int Begin, int End);
private:
	TreeNode root;
	void Insert(int value, TreeNode* a);
	TreeNode* Search(int value, TreeNode* a);
};

