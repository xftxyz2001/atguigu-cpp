#include<iostream>

using namespace std;

// ����һ���ṹ��
struct StudentInfo
{
	string name;
	int age;
	double score;
}stu2, stu3 = {"С��", 19, 65.0};

// ���һ�����ݶ����������Ϣ
void printInfo(StudentInfo stu)
{
	cout << "ѧ��������" << stu.name << "\t ���䣺" << stu.age << "\t �ɼ���" << stu.score << endl;
}

int main()
{
	// �������ݶ�������ʼ��
	StudentInfo stu = {"����", 18, 75.0};
	StudentInfo stu1{"����", 20, 82};

	StudentInfo stu4 = stu3;

	// ��������
	//cout << "ѧ��������" << stu.name << "\t ���䣺" << stu.age << "\t �ɼ���" << stu.score << endl;

	stu2.name = "����";
	stu2.age = 22;
	stu2.score = 60.0;

	printInfo(stu);
	printInfo(stu1);
	printInfo(stu2);
	printInfo(stu3);

	// �ṹ������
	StudentInfo s[3] = {
		{"С��", 17, 85.5},
		{"С��", 18, 72.5},
		{"С��", 20, 66.5}
	};

	printInfo(s[1]);
	s[2].age = 21;
	cout << s[2].age << endl;

	for (StudentInfo stu: s)
	{
		printInfo(stu);
	}

	cin.get();
}