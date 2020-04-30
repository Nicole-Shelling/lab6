// lab5_vershinina.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree* tree = new BinaryTree();
	tree->Insert(2);
	tree->Insert(6);
	tree->Insert(5);
	tree->Insert(7);
	tree->Insert(1);;
	tree->Insert(9);
	tree->Insert(11);
	TreeNode*a = tree->Search(11);
	cout <<endl<< a->getData() << endl;
	tree->~BinaryTree();
	BinaryTree* tree2 = new BinaryTree();
	int Array[8]{ 2, 4, 5, 7, 10, 11, 98, 100};
	int* pBegin = &Array[0];
	tree2->CreateMinimalBST(pBegin, Array[0], Array[7]);
	tree2->~BinaryTree();
	system("pause");
	return 0;
}
