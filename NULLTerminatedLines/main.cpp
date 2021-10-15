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
void to_lower(char str[]);
void shrink(char str[]);
void remove_symbol(char str[], const char symbol);
bool is_palindrome(char str[]);
#define CLASS_WORK
//#define HOME_WORK

void main()
{
#ifdef CLASS_WORK
	for (int i = 0; i < 256; i++)
	{
		cout << i << '\t' << (char)i << endl;
	}
	cout << 'A' << '\t' << 'a' << endl;
	cout << (int)'A' << '\t' << (int)'a' << endl;
	cout << 'A' - 'a' << endl; //оператор минус сам преобразует char 
	setlocale(LC_ALL, "ru");

	//char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	const int n = 256;
	char str[n] = "Хорошо   живет на свете   Винни-пух";
	cout << "Введите строку: ";
	////cin >> str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n); //str - строка; n - размер строки
	cout << str << endl;
	to_upper(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;
	cout << "Строка " << (is_palindrome(str) ? "" : "НЕ ") << " является палиндромом" << endl;
#endif // CLASS_WORK

#ifdef STRLEN
	string str;
	cout << "Введите что нибудь в строку: " << endl;
	cin >> str;
	StringLength(&str);
	cout << endl << endl;
#endif // STRLEN


	//или без использования функции

#ifdef HOME_WORK
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
#endif // HOME_WORK

}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (
			str[i] > 'a' && str[i] <= 'z' ||	//элемент строки маленькая английская
			str[i] > 'а' && str[i] <= 'я'		//или маленькая русская буква
			)
			str[i] -= 32;						//переводим в верхний регистр
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i] > 'a' && str[i] <= 'z' ||	//элемент строки маленькая английская
			str[i] > 'а' && str[i] <= 'я'		//или маленькая русская буква
			)
			str[i] = str[i] + 32;
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)str[j] = str[j + i];
		}
	}
}
void remove_symbol(char str[], const char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
bool is_palindrome(char str[])
{
	
	int n = strlen(str);
	char* buffer = new char[n + 1]{};
	for (int i = 0; str[i]; i++)buffer[i] = str[i];
	to_upper(str);
	remove_symbol(buffer, ' ');
	n = strlen(buffer);
	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[]buffer;
	return true;
}

