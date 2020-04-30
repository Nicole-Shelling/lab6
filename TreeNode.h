#pragma once
class TreeNode
{
public:
	TreeNode();
	TreeNode(int value);
	TreeNode* getLeft();
	TreeNode* getRight();
	int getData();
	void setData(int value);
	void setLeft(int value);
	void setRight(int value);
private:
	int data;
	TreeNode* l;
	TreeNode* r;
};

