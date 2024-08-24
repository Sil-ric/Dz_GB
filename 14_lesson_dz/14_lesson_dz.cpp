#include <iostream>
#include <string>
using namespace std;

int main()
{
   string fresh{"Orange"};
    cout << fresh << endl;
    cout << fresh.length() << endl;//количество символов
    cout << fresh[0] << endl;//Первый символ
    cout << fresh[fresh.size() - 1] << endl;//Последный символ
}
