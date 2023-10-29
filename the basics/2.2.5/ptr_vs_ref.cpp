#include <iostream>
using namespace std;

int main() {
    int* ptr;
    int blah = 1;
    int foo = 2;
    ptr = &foo;
    cout << *ptr << "\n"; // prints out what the ptr is pointing to, in this case it is the value of foo (if I left off the "*", it would print out the memory address of foo)
}