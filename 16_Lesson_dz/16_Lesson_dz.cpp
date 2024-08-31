#include <iostream>
using namespace std;

int main()
{
	const int N = 5;
	int arr[N][N]{};

	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			arr[i][j] = i + j;
			cout << arr[i][j];
		}
		cout << endl;
	}

	int sum = 0;
	int day = 31;
	int index = day % N;

	for (int j = 0; j < N; j++) 
	{
		sum += arr[index][j];
	}
	cout << sum;
}
