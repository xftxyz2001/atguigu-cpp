#include <iostream>

using namespace std;

// ����һ��Ԫ�ػ����ĺ������޷���ֵ
void swap(int& x, int& y)
{
	// �ж����������ȣ��Ͳ�������ֱ�ӷ���
	if (x == y)
		return;

	int temp = x;
	x = y;
	y = temp;
	//return;
}

// �з���ֵ�ĺ��������ؽϳ����ַ���
const string & longStr(const string& str1, const string& str2)
{
	return  str1.size() > str2.size() ? str1 : str2;
}

int main() 
{
	// ��������
	int a = 10, b = 25;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	string str1 = "hello world", str2 = "hello C++, how are you?";

	cout << longStr(str1, str2).size() << endl;

	// ��������ָ��
	int arr[5] = { 1,2,3,4,5 };
	int* parr[5];   // ָ������
	int(* ap)[5] = &arr;   // ����ָ��

	int(*fun(int x))[5];   // ����������fun����ֵ����Ϊ����ָ��

	// �򻯺�������
	typedef int arrayT[5];  // arrayT��һ���Զ�������ͱ�������ʾ����Ϊ5��int����
	arrayT* fun2(int x);

	// β�÷�������
	auto fun3(int x) -> int(*)[5];

	cin.get();
}