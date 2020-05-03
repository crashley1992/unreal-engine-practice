//preprocessor directive
#include <iostream>

using namespace std;

int main() 

{
    cout << "Welcome to the world's most secure gym locker." << endl;
    cout << "If you want you stuff back, you'll need to enter the correct codes." << endl;

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    cout << sum << endl;
    cout << product << endl;

    return 0;
}