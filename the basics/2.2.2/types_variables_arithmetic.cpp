#include <iostream>
using namespace std;

int main()
{
    auto b1 = true;
    bool result = b1 == false;
    cout << "result is: " << result << "\n";
    cout << "-----------\n";
    cout << sizeof(bool) << "\n";
    cout << sizeof(char) << "\n";
    cout << sizeof(int) << "\n";
    cout << sizeof(double) << "\n";

    int a = 1;
    ++a;
    cout << "a is: " << a << "\n";
    --a;
    cout << "a is: " << a << "\n";
}