#include<iostream>
#include<string>
using namespace std;

int main()
{
	// ��ʼ��
    // Ĭ�ϳ�ʼ��
	string s1;
	// ������ʼ��
	string s2 = s1;
	string s3 = "Hello world";

	// ֱ�ӳ�ʼ��
	string s4("hello world!");
	string s5(8, 'h');

	cout << s5 << endl;

	// �����ַ�
	cout << "s4[2] = " << s4[2] << endl;
	s4[0] = 'H';
	cout << s4 << endl;

	s4[s4.size() - 1] = '\?';
	cout << s4 << endl;

	// ����
	for (int i = 0; i < s4.size(); i++)
	{
		s4[i] = toupper(s4[i]);
	}
	cout << s4 << endl;

	// �ַ���ƴ��
	string str1 = "hello", str2("world");
	string str3 = str1 + str2;

	cout << str3 << endl;

	string str4 = str1 + ", " + str2 + "!";
	cout << str4 << endl;

	//string str5 = "hello, " + "world!";    // ����

	// �ַ����Ƚ�
	str1 = "hello";
	str2 = "hello world";
	str3 = "hehehe";

	cout << (str1 == str2 ? "true" : "false") << endl;

	cout << (str1 < str2 ? "true" : "false") << endl;

	cout << (str1 >= str3 ? "true" : "false") << endl;

	cin.get();
}