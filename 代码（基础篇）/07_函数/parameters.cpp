#include <iostream>

using namespace std;

// �ô����x����1
//void increase(int x)
//{
//	++x;
//}

void increase(int* p)
{
	++(*p);
}

// ʹ��������Ϊ�β�
void increase(int& x)
{
	++x;
}

// �Ƚ������ַ����ĳ���
bool isLonger(const string & str1, const string & str2)
{
	return  str1.size() > str2.size();
}

// ��������Ԫ�ؽ��д�ӡ
//void printArray(const int arr[])
//{
//
//}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
}

// ʹ������������Ϊ�β�
void printArray(const int(& arr)[5])
{
	for (int num : arr)
		cout << num << "\t";

	cout << endl;
}

int main()
{
	int n = 0;

	// ��ֵ����
	//increase(&n);
	//increase(&n);

	// �����ò���
	increase(n);

	cout << "n = " << n << endl;

	string str1 = "hello world", str2 = "hello";

	//isLonger(str1, str2);
	isLonger("hello world", "hello");

	int arr[5] = {1,2,3,4,5};

	printArray(arr, 5);

	printArray(arr);

	cin.get();
}