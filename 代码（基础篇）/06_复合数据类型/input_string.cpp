#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, str2;

	// 1. ʹ�������������ȡ����
	//cin >> str >> str2;

	//cout<< str << str2 << endl;

	// 2. ʹ��getline��ȡһ����Ϣ

	string str3;
	getline(cin, str3);
	cout << "str3 = " << str3 << endl;

	// 3. ʹ��cin.get()��ȡһ���ַ�
	char ch;
	ch = cin.get();

	cout << "ch = " << ch << endl;

	cin.get();
	cin.get();
}