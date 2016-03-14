#include <iostream>
#include <cstdlib>
#include <ctime>
#include <complex>

using namespace std;

void print(int** P, int n)
{
	cout << endl << "�������: " << endl;
	for (int i(0); i < n; i++) {
		for (int j(0); j < n; j++) {
			cout << P[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int GetSum(int** P, int n)
{
	int k(1), sum(0);
	for (int i(n - 1); i >= 0; i--)
	{
		if (k == n) return sum;
		for (int j(k); j < n; j++)
		{
			sum += P[i][j];
		}
		k++;
	}
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian"); //������������� ������� ���������
	srand(time(nullptr)); // '���������' ���� ��������� ����� ������������ ������� � 1970 ����...
	
	int n(0); //������ �������
	cout << "������� ������ �������: ";
	cin >> n;
	cout << endl;

	while (!n) { // �������� ���������� ������� �������
		cout << "������ ������� ������ �������, ��������� �������! " << endl;
		cout << "������� ������ �������: ";
		cin >> n;
		cout << endl;
	}

	int** P; // ���������� ��������� ��� �������� ���������� �������

	P = new int*[n]; // ������������� ������� ����������
	for (int i(0); i < n; i++) //���� �� ������� ����������
	{
		P[i] = new int[n]; // ��������������  '�����'(������)
		for (int j(0); j < n; j++)
		{
			P[i][j] = rand() % 10; // ��������� ���������� �������
		}
	}

	print(P, n); // ������� �������

	cout << "����� ��������� ���� �������������� ��������� �����: " << GetSum(P, n) << endl;

	for (int i(0); i < n; i++) //����������� ������ ��������
		delete[] P[i];
	delete[] P; // ����������� ������ ����������


	system("pause");

	return 0;
}