#include<iostream>

using namespace std;

int main()
{
	const int n = 8;
	int arr[n] = { 1,2,3,4,5,6,7,8 };

	// 1. ֱ�Ӵ��������飬����Ԫ�ط�������
	int newArr[n];
	for (int i = 0; i < n; i++)
	{
		newArr[n-i-1] = arr[i];
	}

	// 2. ����˫ָ�룬����ԭ����ķ�ת
	int head = 0, tail = n - 1;

	while (head < tail)
	{
		// ͷβԪ�ضԵ�
		int temp = arr[head];
		arr[head] = arr[tail];
		arr[tail] = temp;

		// ��ͷβָ�����м��ƶ�
		++head;
		--tail;
	}

	// ��ӡ����
	for (int num : arr)
	{
		cout << num << "\t";
	}

	cout << endl;

	cin.get();
}