#include <iostream>
#include <cstdlib>
#include <ctime>
#include <complex>

using namespace std;

void print(int** P, int n)
{
	cout << endl << "Матрица: " << endl;
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
	setlocale(LC_ALL, "Russian"); //распознование русской раскладки
	srand(time(nullptr)); // 'засеиваем' поле случайных чисел относительно времени с 1970 года...
	
	int n(0); //размер массива
	cout << "Введите размер массива: ";
	cin >> n;
	cout << endl;

	while (!n) { // проверка введенного размера массива
		cout << "Размер массива меньше единицы, повторите попытку! " << endl;
		cout << "Введите размер массива: ";
		cin >> n;
		cout << endl;
	}

	int** P; // объявление указателя для создания двумерного массива

	P = new int*[n]; // инициализация массива указателей
	for (int i(0); i < n; i++) //идем по массиву указателей
	{
		P[i] = new int[n]; // инициализируем  'столб'(массив)
		for (int j(0); j < n; j++)
		{
			P[i][j] = rand() % 10; // заполняем случайными числами
		}
	}

	print(P, n); // выводим матрицу

	cout << "Сумма элементов ниже дополнительной диагонали равна: " << GetSum(P, n) << endl;

	for (int i(0); i < n; i++) //освобождаем память столбцов
		delete[] P[i];
	delete[] P; // освобождаем массив указателей


	system("pause");

	return 0;
}