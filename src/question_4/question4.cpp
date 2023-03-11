//
#include <iostream>
#include "question4.h"

using std::cout; using std::cin;
using std::string;

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double num)
{
    string result;
    if(num >= 3.5 && num <= 4)
    {
        result = "A";
    }
    else if(num >= 3 && num <= 3.49)
    {
        result = "B";
    }
    else if(num >= 2 && num <= 2.99)
    {
        result = "C";
    }
    else if(num >= 1 && num <= 1.99)
    {
        result = "D";
    }
    else if(num >= 0 && num <= 0.99)
    {
        result = "F";
    }
    
    return result;

}