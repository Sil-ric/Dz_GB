#include <iostream>
using namespace std;

const int N = 10;

void printNumbers(int N, bool even = true)
{
    if (even)
    {
        cout << "even numbers: ";
        for (int i = 0; i <= N; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "odd numbers: ";
        for (int i = 1; i <= N; i += 2)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    for (int i = 0; i <= N; i += 2)
    {
        cout << i << endl;
    }
    printNumbers(15, true);
    printNumbers(20, false);
}
