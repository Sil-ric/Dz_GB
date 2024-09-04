#include <iostream>
using namespace std;

class Vector 
{
private: 
    double x = 20, y = 15, z = 10;
public:
    void show() 
    {
        cout << "X = " << x << " " << "Y = " << y << " " << "Z = " << z << endl;
        cout << length();
    }

    double length()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    Vector v;
    v.show();
}