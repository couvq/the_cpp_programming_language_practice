#include "Count.h"

#include <iostream>
using namespace std;

int main() {
    Count count(0);
    count.increment();
    count.increment();
    count.decrement();
    cout << count.getCount();
}