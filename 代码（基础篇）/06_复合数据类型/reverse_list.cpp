#include<iostream>
#include "list_node.h"

using namespace std;

int main()
{
	// �������� 1 -> 2 -> 3 -> 4 -> 5 -> NULL
	ListNode node5 = {5, nullptr};
	ListNode node4 = { 4, &node5 };
	ListNode node3 = { 3, &node4 };
	ListNode node2 = { 2, &node3 };
	ListNode node1 = { 1, &node2 };

	ListNode* list = &node1;

	// ��ӡ����
	ListNode* np = list;
	while (np)
	{
		cout << (*np).value << " -> ";
		np = (*np).next;
	}

	cout << " NULL " << endl;

	// ��������ָ�룬һ��ָ��ǰ�����Ľڵ㣬��һ��ָ��֮ǰ�Ľڵ�
	ListNode* curr = list;
	ListNode* prev = nullptr;

	// ��ת����
	while (curr)
	{
		// ����ʱ����ָ����һ���ڵ��ָ��
		ListNode* temp = curr -> next;
		curr->next = prev;
		
		// ����ָ�붼��ǰ�ƶ�
		prev = curr;
		curr = temp;
	}

	ListNode* newList = prev;

	np = newList;
	while (np)
	{
		cout << np->value << " -> ";
		np = np->next;
	}

	cout << " NULL " << endl;

	cin.get();

}