#include<iostream>
#include<Windows.h>
#include<string.h>
#include <ctype.h>
using namespace std;

//#define STRLEN

void StringLength(string* str)
{
	cout << "Количество символов в строке: " << endl;

	cout << size(*str) << endl;
}

void to_upper(char str[]);

void main()
{
	for (int i = 0; i < 256; i++)
	{
		cout << i << '\t' << (char)i << endl;
	}
	cout << 'A' << '\t' << 'a' << endl;
	cout << (int)'A' << '\t' << (int)'a' << endl;
	cout << 'A' - 'a' << endl; //оператор минус сам преобразует char 
	setlocale(LC_ALL, "ru");

	//char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	const int n = 20;
	char str[20] = {};
	//cout << "Введите строку: "; 
	////cin >> str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//cin.getline(str, n); //str - строка; n - размер строки
	//cout << str << endl;
	//cout << "Введите строку: "; 
	
#ifdef STRLEN
	string str;
	cout << "Введите что нибудь в строку: " << endl;
	cin >> str;
	StringLength(&str);
	cout << endl << endl;
#endif // STRLEN


	//или без использования функции

	cout << "Вот есть фраза \"Hello, World!\"" << endl;
	const char string[] = "Hello, World!";
	cout << "Количество значений в строке: ";
	cout << strlen(string) << endl;
	cout << endl << endl;

	char a;
	cout << "Введите букву нижнего регистра:" << endl;
	cin >> a;
	a = toupper(a);
	
	cout << endl << "Та же буква в верхнем регистре: " << a;
	cout << endl << endl;


	char b;
	cout << "Введите букву верхнего регистра:" << endl;
	cin >> b;
	b = tolower(b);

	cout << endl << "Та же буква в нижнем регистре: " << b;

	to_upper(str);
	cout << str << endl;
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] -= 32;
	}
}