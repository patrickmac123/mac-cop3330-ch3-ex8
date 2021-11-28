#include "std_lib_facilities.h"
#include <iostream>

int main()
{

int input;

cout << "Please enter an integer value: ";
cin >> input;

if(input % 2 == 0)
{
    cout << "The value "<<input<<" is an even number.";
}
else
{
    cout << "The value "<<input<<" is an odd number. ";
}

}