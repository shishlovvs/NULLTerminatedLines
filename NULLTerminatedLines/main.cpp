#include<iostream>
#include<Windows.h>
#include<string.h>
#include <ctype.h>
using namespace std;

void StringLength(string* str)
{
	cout << "���������� �������� � ������: " << endl;

	cout << size(*str) << endl;
}


void main()
{
	setlocale(LC_ALL, "ru");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	//const int n = 20;
	//char str[20] = {};
	//cout << "������� ������: "; 
	////cin >> str;
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	//cin.getline(str, n); //str - ������; n - ������ ������
	//cout << str << endl;
	//cout << "������� ������: "; 
	
	string str;
	cout << "������� ��� ������ � ������: " << endl;
	cin >> str;
	StringLength(&str);
	cout << endl << endl;

	//��� ��� ������������� �������

	cout << "��� ���� ����� \"Hello, World!\"" << endl;
	const char string[] = "Hello, World!";
	cout << "���������� �������� � ������: ";
	cout << strlen(string) << endl;
	cout << endl << endl;


	char a;
	cout << "������� ����� ������� ��������:" << endl;
	cin >> a;
	a = toupper(a);
	
	cout << endl << "�� �� ����� � ������� ��������: " << a;
	cout << endl << endl;


	char b;
	cout << "������� ����� �������� ��������:" << endl;
	cin >> b;
	b = tolower(b);

	cout << endl << "�� �� ����� � ������ ��������: " << b;
}

