#include <iostream>
#include "tree_node.h"

// ���õݹ�ʵ�ֶ����������������ӡ���
void printTreePreOrder(TreeNode* root)
{
	// ��׼���������ǿ�������ֱ�ӷ���
	if (root == nullptr) return;

	// �ȴ�ӡ���ڵ��ֵ
	//cout << (*root).name << "\t";
	cout << root->name << "\t";

	// �ݹ��ӡ��������
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}

// �������
void printTreeInOrder(TreeNode* root)
{
	// ��׼���������ǿ�������ֱ�ӷ���
	if (root == nullptr) return;

	// �ȴ�ӡ������
	printTreeInOrder(root->left);
	// ��ӡ���ڵ�
	cout << root->name << "\t";
	// �ݹ��ӡ������
	printTreeInOrder(root->right);
}

// �������
void printTreePostOrder(TreeNode* root)
{
	// ��׼���������ǿ�������ֱ�ӷ���
	if (root == nullptr) return;

	// �ȴ�ӡ��������
	printTreePostOrder(root->left);
	printTreePostOrder(root->right);

	// �ٴ�ӡ���ڵ�
	cout << root->name << "\t";
}