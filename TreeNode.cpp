#include "pch.h"
#include "TreeNode.h"
#include <iostream>

using namespace std;
TreeNode::TreeNode()
{
	data = NULL;
	l = nullptr;
	r = nullptr;
}


TreeNode::TreeNode(int value)
{
	data = value;
	l = nullptr;
	r = nullptr;
}
TreeNode* TreeNode::getLeft()
{
	return l;
}
TreeNode* TreeNode::getRight()
{
	return r;
}

int TreeNode::getData()
{
	return data;
};
void TreeNode::setData(int value)
{
	data = value;
};
void TreeNode::setLeft(int value)
{
	TreeNode* left = new TreeNode(value);
	l = left;
};
void TreeNode::setRight(int value)
{
	TreeNode* right = new TreeNode(value);
	r = right;
};