#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
Start:
	int zadanie;
	cout << "������� ����� �������: ";
	cin >> zadanie;
	switch (zadanie)
	{
	case 1:
	{
		system("cls");
		cout << "������� 1." << endl;
		cout << "�������� ��������� ������ �����, ������� � ��������� �� -5 �� 5, � ������������������ �����, �������� � ����������, �������������� ������� ���������� ���� . ����������� ������: 1,10,-4,5,-16,-5,0." << endl;
		cout << "�������:" << endl;
		int a;
		cout << "������� �����:" << endl;
		do 
		{
			cin >> a;
			if ((a >= -5 && a < 0) || (a <= 5 && a > 0))
				cout << "����� " << a << " ������ � �������� �� -5 �� 5" << endl;
			else if (a == 0)
				cout << "" << endl;
			else
				cout << "����� " << a << " �� ������ � �������� �� -5 �� 5" << endl;

		} while (a != 0);
		goto Start;
		break;
	}
	case 2:
	{
		system("cls");
		cout << "������� 2." << endl;
		cout << "��������� ����� ����� �� 1 �� N, ����������� � ������� M. ���������� � ������� �������� ��� ������������ ���������." << endl;
		cout << "�������:" << endl;
		int N, M, k;
		cout << "������� �������� �����: ";
		cin >> N;
		cout << "�������: ";
		cin >> M;
		int sum = 0;
		for (int i = 1; i <= N; i++)
		{
			k = i;
			for (int j = 2; j <= M; j++)
				k *= i;
			sum += k;
		}
		cout << sum << endl;
		goto Start;
		break;
	}
	case 3:
	{
		system("cls");
		cout << "������� 3." << endl;
		cout << "� �������� ������� ���������� S �����. ����������� ��������� ���������� ������, � ������� �� ���������� ��������� �� � ���������� B �����. � ����� ���� ��� ���������� ����������� ������� �� 3%. ����������, ������� ������� ������ ������� �������, ��������� ������ ���������� � ���������." << endl;
		cout << "�������:" << endl;
		float S, A, B;
		cout << "������� ����� ����������: ";
		cin >> S;
		cout << "������� ����� ���������: ";
		cin >> A;
		cout << "������� ����� �������� �� ����������: ";
		cin >> B;
		for (int i = 1; ; i++)
		{
			S = S + A - B;
			if (S < 0)
			{
				cout << "������� ����� �������, ��������� ������ ��������� � ���������� " << i - 1 << " �������." << endl;
				break;
			}
			B = B + (B*0.03);
		}
		goto Start;
		break;
	}
	case 4:
	{
		system("cls");
		cout << "������� 4." << endl;
		cout << "���� ����������� ����� n (n<9999) � ����� m. ����� ����� m-��������� ���� ����� n." << endl;
		cout << "�������:" << endl;
		int n, N, m, sum = 0;
		cout << "������� ����� n (<9999): ";
		cin >> n;
		if (n > 0 && n <= 9999)
		{
			cout << "������� ���-�� ��������� ���� ��� ������ �� �����: ";
			cin >> m;
			if (n < 100 && m>2)
				cout << "������������ ���-�� ��������� ����." << endl;
			else if (n > 99 && n < 1000 & m>3)
				cout << "������������ ���-�� ��������� ����." << endl;
			else if (n > 999 && n < 10000 & m>4)
				cout << "������������ ���-�� ��������� ����." << endl;
			else
			{
				N = n;
				for (int i = 1; i <= m; i++)
				{
					sum += N % 10;
					N /= 10;
				}
				cout << "����� " << m << " ��������� ���� ��� ����� " << n << " ����� " << sum << endl;
			}
		}
		else
			cout << "������� ������ �����." << endl;
		goto Start;
		break;
	}
	case 5:
	{
		system("cls");
		cout << "������� 5." << endl;
		cout << "����������� ����� �� n ���� �������� ����� ����������, ���� ����� ��� ���� ����������� � n-�� ������� ����� ������ �����. �������� ���  ��� ����� ��������� �� ���� � ������� ���� (������ 1^3 + 5^3 + 3^3 = 153 )." << endl;
		cout << "�������:" << endl;
		int n, stepen, sum, j;
		cout << "����� ���������� � ������� �� 100 �� 9999:" << endl;
		for (int i = 100; i <= 9999; i++)
		{
			stepen = 0;
			n = i;
			j = i;
			do
			{
				j = j / 10;
				stepen++;
			} while (j >= 1);
			sum = 0;
			while (n != 0)
			{
				sum += pow((n % 10), stepen);
				n /= 10;
			}
			if (i == sum)
				cout << i << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 6:
	{
		system("cls");
		cout << "������� 6." << endl;
		cout << "����� ��� ����� ������� ����, � ����� ���� ������� ����� ������ ����." << endl;
		cout << "�������:" << endl;
		int N, n, sum;
		cout << "�� ������ ����� ������� ��������? ";
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			n = i;
			sum = 0;
			while (n != 0)
			{
				sum += n % 10;
				n /= 10;
			}
			if (i % 7 == 0 && sum % 7 == 0)
				cout << i << " ";
		}
		cout << endl;
		goto Start;
		break;
	}
	case 7:
	{
		system("cls");
		cout << "������� 7." << endl;
		cout << "��������� ����� ����� �� ���������� ������� ��������� � ������������, ��������� �������� ������� �� 8." << endl;
		cout << "�������:" << endl;
		int num, z, t;
		cout << "������� ����� � ���������� ������� ���������: ";
		cin >> num;
		cout << "����� " << num << " � ������������ ������� ��������� - ";
		do
		{
			int k = num;
			num = num / 8;
			t = num;
			t = k - (t * 8);
			cout << t;
		} while (num > 0);
		cout << " (������ � �����)" << endl;
		goto Start;
		break;
	}
	break;
	}
}