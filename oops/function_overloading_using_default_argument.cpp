#include <iostream>
using namespace std;

// 'add' function that accepts 4 integers,
// where the last two parameters have default values.
int add(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    // Call with 2 arguments; c and d use default values (0).
    cout << "add(10, 20) = " << add(10, 20) << endl; // Output: 30

    // Call with 3 arguments; d uses the default value (0).
    cout << "add(10, 20, 30) = " << add(10, 20, 30) << endl; // Output: 60

    // Call with 4 arguments; no default values used.
    cout << "add(10, 20, 30, 40) = " << add(10, 20, 30, 40) << endl; // Output: 100

    return 0;
}
