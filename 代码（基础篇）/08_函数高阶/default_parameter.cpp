#include <iostream>
#include <string>
using namespace std;

// ����һ������ѧ����Ϣ�ĺ���������Ĭ��ʵ��
string stuInfo(string name = "", int age = 18, double score = 60)
{
	string info = "ѧ��������" + name + "\t���䣺" + to_string(age) + "\t�ɼ���" + to_string(score);

	return info;
}

//string stuInfo(string name, int age = 18, double score);   // ����

int main()
{
	cout << stuInfo() << endl;
	cout << stuInfo("����", 18, 60) << endl;
	cout << stuInfo("����") << endl;
	cout << stuInfo("����", 69.5) << endl;
	//cout << stuInfo(19, 69.5) << endl;
	//cout << stuInfo(, , 69.5) << endl;

	cin.get();
}