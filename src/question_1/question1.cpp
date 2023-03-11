#include "question1.h"
#include<string>
#include<iostream>

bool test_config()
{
    return true;
}

bool is_palindrome(const std::string &str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i -1])
        return false;
    }
    return true;

    /*std::string rev;
    auto len = str.length();

    for(auto i = len-1; i >= 0; i--)
    {
        rev.push_back(str[i]);
    }
    if(str == rev)
    {
        return true;
    }
    else
    {
        return false;
    }*/

}
