#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
unsigned short int z;
void rand(int *a, int size);
void BubbleSort(int *a, int size);
void main() {
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "����� �������?";
		cin >> z;
		if (z == 0)
		{
			break;
		}
		else if (z == 1)
		{
			cout << "������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������. ������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������" << endl << endl;
			const int size1 = 9;
			const int size2 = 7;
			const int size3 = 16;
			int mas1[size1];
			int mas2[size2];
			int mas3[size3];
			cout << "������ ������: ";
			rand(mas1, size1);
			cout << endl;
			cout << "������ ������: ";
			rand(mas2, size2);
			cout << endl;
			//int count = 0;
			for (int i = 0; i < 9; i++)
			{
				mas3[i] = mas1[i];

			}
			int count = 0;
			for (int i = 9; i < size3; i++)
			{
				mas3[i] = mas2[count];
				count++;
			}
			cout << "������������ ������: ";
			for (int i = 0; i < size3; i++)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
			cout << "��������������� ������: ";
			BubbleSort(mas3, size3);
			cout << endl;
		}
		else if (z == 2)
		{
			cout << "2.� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������\n" << endl;
			const int size = 9;
			int mas[size], mas1[5], max;
			rand(mas, size);

			int count = 0;
			for (int i = 0; i < size; i++)
			{
				if (mas[i] > 0 && mas[i] % 2 != 0)
				{
					mas1[count] = mas[i];
					count++;
				}
			}
			cout << endl;
			cout << "�������� �������������� �����= ";
			for (int i = 0;i<count;i++)
			{
				cout << mas1[i] << " ";
			}
			cout << endl;
			int index = 0;
			for (int i = 0; i < count; i++)
			{
				max = mas1[0];
				if (mas1[i] > max)
				{ 
					max = mas1[i];
					index = i;
				}
				
			}
			cout << "������ ����������� �� �������� �� �������� ������������� ���������: " << index+1 << endl;
		}
		else if (z == 3)
		{
			cout << "3.	������ ������, ��������� �� 9 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������" << endl;
			const int size = 9;
			int mas[size], mas2[size];
			for (int i = 0; i < size; i++)
			{
				mas[i] = 10 + rand() % 100;
			}
			for (int i = 0; i < size; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				int first = mas[i] / 10;
				int second = mas[i] % 10;
				mas2[i] = first + second;
			}
			cout << "������, ��������� �� ���� ���� ��������� ��������� �������: ";
			for (int i = 0; i < size; i++)
			{
				cout << mas2[i] << " ";
			}
		}
		else if (z == 4)
		{
			cout << "���� �������������� ����� c1, c2, �, cn. ����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������.\n" << endl;
			const int size = 9;
			int mas[size], mas2[size], mas3[size], pr = 1, pr1 = 1;
			for (int i = 0; i < size; i++)
			{
				mas[i] = 10 + rand() % 100;
			}
			for (int i = 0; i < size; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
			int count = 0;
			for (int i = 0; i < size; i++)
			{
				if (i % 2 == 0) {
					int first = mas[i] / 10;
					int second = mas[i] % 10;
					mas2[count] = first + second;
					count++;
				}
			}
			cout << "������ �� ���� ���� ��������� c ������� ��������� �������: ";

			for (int i = 0; i < count; i++)
			{
				cout << mas2[i] << " ";
			}
			for (int i = 0; i < count; i++)
			{
				pr *= mas2[i];
			}
			cout << endl;
			cout << "������������ ����� ����� � ������� ��������� = " << pr << endl;
			cout << endl;

			int count1 = 0;
			for (int i = 0; i < size; i++)
			{
				if (i % 2 != 0) {
					int first = mas[i] / 10;
					int second = mas[i] % 10;
					mas3[count1] = first + second;
					count1++;
				}
			}
			cout << "������ �� ���� ���� ��������� c ��������� ��������� �������: ";

			for (int i = 0; i < count1; i++)
			{
				cout << mas3[i] << " ";
			}
			for (int i = 0; i < count1; i++)
			{
				pr1 *= mas3[i];
			}
			cout << endl;
			cout << "������������ ����� ����� � ��������� ��������� = " << pr1 << endl;
		}
		else if (z == 5)
		{
			cout << "5.	������ ������, ��������� �� 14 ��������� ��������������� ����. �������� ������� ������ �������� �� ������. ���������� ���������� ������������� ��� ���� ������������.\n" << endl;
			const int size = 14;
			int mas[size];
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			int kol_per = 0;
			int s = 7;
			for (int i = 0; i < size / 2; i++)
			{
				int save = mas[s];
				mas[s] = mas[i];
				mas[i] = save;
				s++;
				kol_per += 1;
			}
			for (int i = 0; i < size; i++)
			{
				cout << mas[i] << " ";
			}

			cout << endl;
			cout << "���������� ������������= " << kol_per << endl;
		}

		if (z == 6)
		{
			//6.���������� ���������� ��������� ���������� � �������� �������� �������. (��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����).
			const int size = 14;
			int mas[size], kol = 0;
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < size - 2; i++)
			{
				if (mas[i + 1] > mas[i] && mas[i + 1] > mas[i + 2])
					kol += 1;
			}
			cout << "���������� ��������� ����������: " << kol << endl;
		}
		if (z == 7)
		{
			//7.	� �������� �������� ������� ���������� � ������� ������� ������������������� �����, ������� ��������� ������� (������ ��������� ����� ������ �����������).
			const int size = 14;
			int mas[size], kol = 0;
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			int index;
			for (int i = 0; i < size - 1; i++)
			{
				if (mas[i + 1] < mas[i])
				{
					index = i + 2;
					cout << index << "\t";
				}
				else
				{
					continue;
				}
			}
			cout << endl;

		}
		if (z == 8)
		{
			//8.	������ ������, ��������� �� 10 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.
			const int size = 14;
			int mas[size], mas2[size], kol = 0;
			for (int i = 0; i < size; i++)
			{
				mas[i] = 10 + rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			int ed, des, rasn;
			for (int i = 0; i < size; i++)
			{
				ed = mas[i] / 10;
				des = mas[i] % 10;
				rasn = des - ed;
				mas2[i] = rasn;
			}
			for (int i = 0; i < size; i++)
			{
				cout << mas2[i] << " " << endl;
			}
		}
		if (z == 9)
		{
			//9.	����� ������������� ������. ���������� ���������� �������� �������, �� ������� �������� ��������� ���������� (������ ��������� ����� ������ �����������)
			const int size = 14;
			int mas[size], kol = 0;
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			int index;
			for (int i = 0; i < size - 1; i++)
			{
				if (mas[i + 1] > mas[i])
				{
					index = i + 2;
					cout << index << "\t";
				}
				else {
					continue;
				}
			}
			cout << endl;
		}
		if (z == 10)
		{
			//10.	������ ��� ������� �������������� �����. ���������� ������������ �������� � ������ ������� � �������� �� �������.
			const int size = 14;
			int mas[size], mas2[size], index1 = 0, index2 = 0;
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 50;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				mas2[i] = rand() % 50;
				cout << mas2[i] << " ";
			}
			cout << endl;
			int max1 = mas[0], max2 = mas2[0];
			for (int i = 1; i < size; i++)
			{
				if (mas[i] > max1)
				{
					max1 = mas[i];
					index1 = i;
				}
			}
			for (int i = 1; i < size; i++)
			{
				if (mas2[i] > max2)
				{
					max2 = mas2[i];
					index2 = i;
				}
			}
			cout << "������������ ������� ������� �������= " << max1 << "  " << "������������ ������� ������� �������= " << max2 << endl;
			cout << "������ ������������ ������� ������� �������= " << index1 << "  " << "������������������ ������� ������� �������= " << index2 << endl;
			int tmp = mas[index1];
			for (int i = 0; i < size; i++)
			{
				mas[index1] = mas2[index2];
				cout << mas[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				mas2[index2] = tmp;
				cout << mas2[i] << " ";
			}
			cout << endl;
		}

	}

	system("pause");
}
void rand(int *a, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		a[i] = -25 + rand() % 100;
		cout << a[i] << " ";
	}
}
void BubbleSort(int *a, int size)
{
	int buff = 0;
	for (int i = 0; i < size - 1; i++)
	{
		int f = 0;
		for (int j = size - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				buff = a[j];
				a[j] = a[j - 1];
				a[j - 1] = buff;
				f = 1;
			}
		}
		if (f == 0)
		{
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

