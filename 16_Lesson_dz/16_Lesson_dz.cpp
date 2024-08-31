#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int arr[N][N]{};
	
	// заполнение масива
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			arr[i][j] = i + j;
			cout << arr[i][j];// вывидение масива в консоль
		}
		cout << endl;
	}

	int sum = 0;
	int day = 31;// Текущий день
	int index = day % N;// Индек строки

	// Вычисление суммы элементов в строке
	for (int j = 0; j < N; j++)
	{
		sum += arr[index][j];
	}

	// Вывод суммы
	cout << "Сумма элементов в строке " << index << ": " << sum << endl;
}
