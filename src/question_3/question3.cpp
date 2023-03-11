#include<iostream>
#include<string>
#include "question3.h"

using std::cout; using std::cin;
using std::string;

bool test_config()
{
    return true;
}

std::string decimal_to_binary(int num)
{
    string str;
    string result;

    for (int i = 7; i >= 0; i--)
    {
        if(num % 2 == 0)
        {
            str.push_back('0');
            num = num / 2;
        }
        else
        {
            str.push_back('1');
            num = num / 2;
        }
    }

	int len = str.length();
    for (int i = len-1; i>=0; i--)
    {
        result.push_back(str[i]);
    }

    return result;

}