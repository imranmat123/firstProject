#include <iostream>

int main()
{
    int favNumber;
    //output
    std::cout <<"Enter your favorite number between 1 and 100: ";
    //input
    std::cin >> favNumber;
    std::cout << "Amazing!! That's my favorite number too" << std::endl;

    std::cout  <<"No really " << favNumber << " is my favorite number!!" << std::endl;
    return 0;
}