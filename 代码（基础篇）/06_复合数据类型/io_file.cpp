#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");

	// 1. ���յ��������ȡ
	//string word;
	//while (input >> word)
	//{
	//	cout << word << endl;
	//}

	// 2. ���ж�ȡ
	//string line;
	//while (getline(input, line))
	//{
	//	cout << line << endl;
	//}

	// 3. ����ַ���ȡ
	char ch;
	while (input.get(ch))
	{
		//cout << ch << endl;
		output << ch << endl;
	}

	cin.get();
}