#include <iostream>
using namespace std;

class MyContainer
{
private:
    int *data;

public:
    MyContainer(int size) : data(new int[size]) {
        cout << "constructor called! \n";
    }
    ~MyContainer()
    {
        delete[] data;
        cout << "destructor called! \n";
    }
};

int main() {
    MyContainer a(5);
}

// destructor called automatically when run out of scope the object is defined in
