#include <iostream>

using namespace std;
//function prototype, goes above int main
void myFunction(int);

int main ()
{
myFunction(5);


return 0;
}

void myFunction(int x)
{
    cout << "My favorite number is " << x << endl;
}

#include <iostream>

using namespace std;
//function prototype, goes above int main
void addition(int);

int main ()
{
    int num1;

cin >> num1;

addition(num1);
return 0;
}
void addition(int num1) {
cout << "the total is " << num1 + num1 << endl;
}


#include <iostream>
#include <cmath>
//int function that returns a number
int dogyears(int);

using namespace std;


int main ()
{

int years;
cout << "enter you dogs age: " << endl;
cin >> years;
int peopleyears = dogyears(years);
cout << "your dog is " << peopleyears;

}

int dogyears(int dog)
{
    return 7 * dog;
}

