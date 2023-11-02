#include <string>
#include <iostream>
using namespace std;

int main()
{
    /*
        1. Things that were new/stood out to me:
            - really having to think about references/pointers (all other languages I have used abstract that away from me)
            - the concept of class destructors
            - .h files for declarations seem kind of like interfaces in Java (but they differ)
            - the difference between a++ and ++a, the first creates a copy of a and increments it and returns the reference to the result,
              the second increments the value and returns a reference to the result
            - differences between statically and dynamically typed languages. Statically typed check their types at compile time, dynamically typed do this at runtime.
            - Bjarne recommends initializing variables like this `bool isTrue {true};` instead of this `bool isTrue = true;`. I guess the reason is it will throw an error if the types don't match up and doing
            it the = way could lead to truncation (ex. int foo = 7.9 will set the value of foo to 7)
     */

    /*
        2. A compiler translates a programming languages source code into machine readable code. A linker comes after the compilation step, and "links" references of files to other files.
    */

    /*
         3. Wrote hello world program previously
    */

    /*
          4. gpp, g++, clang? I don't know if it really matters what I use but I found I had g++ ready to go on my machine so I am using that rn via the terminal.
    */

    /*
           5. [5] (∗1) Write out a bool, a char, an int, a double, and a string.
     */

    bool isActive {true};
    char a {'A'};
    int myFavoriteInt {24};
    double pi {3.1415926};
    string hello_world {"hello world"};

    cout << isActive << '\n';
    cout << a << '\n';
    cout << myFavoriteInt << '\n';
    cout << pi << '\n';
    cout << hello_world << '\n';

    /*
           6. [6] (∗1) Read in a bool, a char, an int, a double, and a string.
     */

    bool isInput;
    cin >> isInput;
    cout << "you entered " << isInput << " for isInput bool \n";

    char b;
    cin >> b;
    cout << "you entered " << b << " for b char \n";

    int coolInt;
    cin >> coolInt;
    cout << "you entered " << coolInt << " for coolInt int \n";

    double someDouble;
    cin >> someDouble;
    cout << "you entered " << someDouble << " for someDouble double \n";

    string message;
    cin >> message;
    cout << "you entered " << message << " for message string \n";

    /*
           7. (∗2) What is an invariant and what good might it do?

           from my understanding an invariant is basically handling errors for invalid inputs to an object. 
           ex. -> throw an exception if you pass in a negative value to Vector

           Bjarne labels an invariant as "a statement of what is assumed to be true for a class"
     */
}