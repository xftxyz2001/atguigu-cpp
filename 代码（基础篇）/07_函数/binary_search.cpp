#include <iostream>

using namespace std;

// ����һ�����ֲ��Һ������ݹ����
int search(const int(&a)[10], int start, int end, int target)
{
	// ��׼�������������Ѿ�û��Ԫ�أ�����target�����˷�Χ��û���ҵ���ֱ�ӷ���-1
	if (start > end || target < a[start] || target > a[end])
		return -1;

	// �����м�λ������
	int mid = (start + end) / 2;

	// �Ƚ��м�λ�����ݺ�Ŀ��ֵ�Ĵ�С
	if (a[mid] == target)
		return mid;
	else if (a[mid] > target)
		return search(a, start, mid - 1, target);    // �м�ֵ��Ŀ��ֵ������ǰ�벿��
	else 
		return search(a, mid + 1, end, target);    // �м�ֵ��Ŀ��ֵС��������벿��
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,9,12,25,38 };

	int key = 10;

	int size = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, 0, size - 1, key);

	result == -1 ?
		cout << "��������û���ҵ�" << key << "!" << endl :
		cout << "���������ҵ�" << key << "�������±�Ϊ��" << result << endl;

	cin.get();
}