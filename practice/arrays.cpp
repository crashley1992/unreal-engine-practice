#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //basic loop through an array
   int ash[9];

   cout << "Element -  Value" << endl;

   for(int x = 0;  x < 9; x++) {
        ash[x] = 99;
        cout << x << " ------------ "<< ash[x] << endl;
   }

   return 0;
}


//adds each element in the array together
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int nums[5] = {20, 54, 76, 832, 546};
   int sum = 0;

   for( int i = 0; i < 5; i++) {
        sum += nums[i];
        cout << sum << endl;
   }

   return 0;
}

//passing array through a function
#include <iostream>
#include <vector>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
    int nums[3] = {1,2,3};
    int primes[6] = {3, 7, 9 , 11, 13, 17};

    printArray(primes, 3);
}
//function takes and array and size of array
void printArray(int theArray[], int sizeOfArray) {

    for (int x = 0; x < sizeOfArray; x++) {
        cout << theArray[x] << endl;
    }
}

//multidimenstional array
#include <iostream>
using namespace std;

int main() {
    //array 1 is a row array 2 is a column
    int nums[2][3] = {{2,3,4},{8,9,10}};

    //2,3,4
    //8,9,10

    cout << nums[1][1];

}

//print out a multidimentional array
#include <iostream>
using namespace std;

int main() {

    int nums[2][3] ={{1,2,3},{7,8,9}};

    for( int row = 0; row < 2; row++) {

        for(int column = 0; column < 3; column++) {
            cout << nums[row][column] << " ";
        }
        cout << endl;
    }

}

