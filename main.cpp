#include<iostream>
#include<Windows.h>
#define LINE "---------------------------------------------------------------------------------\n"
using namespace std;
int  string_length(char str[],int N); // ����� ������
void to_upper(char str[],int length);
void to_lower(char str[], int length);
void shrink(char str[], int N);

void main()
{
	setlocale(LC_ALL, "");
	/*char str[] = { 'H','e','l','l','o',0};
	char str1[] ="hello";
	cout << str << endl;
	cout << sizeof(str1) << endl;
	const int n = 20;
	char str2[n] = {};*/
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//cout << "������� ������ = "; //cin >> str2;
	//cin.getline(str2, n);
	////SetConsoleCP('866');
	//cout << str2<<" = "<<sizeof(str2);
	int N = 10;
	cout << "������� ����� ������ (�� ��������� N=10) = "; cin >> N;
	char* str = new char[N];
	cout << "������� ������ = "; cin >> str;
	cout << "\n" << str<<"\t" << sizeof(str);
	int length = string_length(str, N);
	cout<<"\n ����� ������ = " << length << endl;
	cout << LINE;
	to_upper(str, length);
	cout << "� ������ �������\n" << str << endl;
	cout << LINE;
	to_lower(str, length);
	cout << "� ������ �������\n" << str << endl;
	cout << LINE; cout << LINE;
	const int Numm = 55;
	char p1[Numm] = "������      �����     ��     �����      �����      ���";
	cout << "������� ������ ������� � ��������� ����������� - \n" << p1 << endl;
	shrink(p1, Numm);


}

int string_length(char str[],int N)// �������� ������ �� ������� ��� �������
{
	int a = 0;
	for (int i = 0; i < N; i++)
	{
		if ((str[i] != 0) && (str[i] != 32))
		{
			a++;
		}
		else return a;
	}
	
}

void to_upper(char str[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		if ((('a'<=str[i])&&(str[i]<='z'))||(('�'<=str[i]) && (str[i]<='�')))
		{
			str[i] -= 32;
		}
	}
}

void to_lower(char str[], int length)
{
	{
		for (size_t i = 0; i < length; i++)
		{
			if ((('A' <= str[i]) && (str[i] <= 'Z')) || (('�' <= str[i]) && (str[i] <= '�')))
			{
				str[i] += 32;
			}
		}
	}
}

void shrink(char str[], int N)
{
	int count = 0;
	const int n =55;
	char str_copy[n];
	for (int i = 0; i < N; i++)
	{
		if ((str[i] == 32) && (str[i + 1] == 32))
		{
			count++;
			continue;
		}
		else str_copy[i-count] = str[i];
	}
	cout << str_copy << endl;
}
