#include "Count.h"

Count::Count(int startCount) { count = startCount; }
void Count::increment() { ++count; }
void Count::decrement() { --count; }
int Count::getCount() { return count; }
