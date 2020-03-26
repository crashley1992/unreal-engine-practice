//You can ask a user to input info with cin aka console in
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    //prompts user, stores input to variable
    cin >> age;

    cout << "You are " << age << " years old";

    return 0;
}

//you can ask for string input but using getline()
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    //gets entire line user enters
    getline(cin, name);

    cout << "Hello " << name;

    return 0;
}
