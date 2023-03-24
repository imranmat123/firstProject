Welcome to my first C++ project! This is a simple program that asks the user to enter their favorite number between 1 and 100 and then outputs a message indicating that it's also the program's favorite number. The program uses the standard input/output library of C++.

Code Explanation

The code starts with including the iostream library which is used for input/output operations in C++.
#include <iostream>

The main function is the entry point of the program.
int main()

We declare an integer variable named favNumber which will store the user's favorite number.
int favNumber;

The program outputs a message asking the user to enter their favorite number.
std::cout <<"Enter your favorite number between 1 and 100: ";

The user enters their favorite number which is stored in the favNumber variable using the cin object from the iostream library.
std::cin >> favNumber;

The program then outputs a message indicating that the user's favorite number is also the program's favorite number.
std::cout << "Amazing!! That's my favorite number too" << std::endl;

Finally, the program outputs a message confirming that the user's favorite number is the program's favorite number.
std::cout  <<"No really " << favNumber << " is my favorite number!!" << std::endl;

The program ends by returning 0, which indicates successful completion of the program.
return 0;
