#include "question2.h"

bool test_config()
{
    return true;
}

int get_fib_number(int num)
{
    auto first_num = 0;
    auto second_num = 1;
    auto next_num = 0;
    auto result = 0;
    if(num == 1)
    {
        result = first_num + second_num;
    }
    else
    {
        for( auto i = 2; i <= num; i++)
        {
            next_num = first_num + second_num;
            first_num = second_num;
            second_num = next_num;
            result = next_num;
        }
    }

    return result;
}