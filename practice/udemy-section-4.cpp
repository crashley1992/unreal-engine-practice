#include <iostream>

int main() 
{
    int favorite_number;
    
    std::cout << "Enter your favorite number: ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! " << favorite_number << " That's my favorite number too!" << std::endl;
    
    return 0;
}

//very basic calculator
int a;
        int b;
        int sum;

        cout << "Enter a number boss! \n";
        cin >> a;
        cout << "Enter another number\n";
        cin >> b;

        sum = a + b;
        cout << "the sum of those numbers is " << sum << endl;

        return 0;