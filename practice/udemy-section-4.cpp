#include <iostream>

int main() 
{
    int favorite_number;
    
    std::cout << "Enter your favorite number: ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! " << favorite_number << " That's my favorite number too!" << std::endl;
    
    return 0;
}