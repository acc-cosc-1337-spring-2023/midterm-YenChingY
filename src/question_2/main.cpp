#include<iostream>
#include "question2.h"

using std::cout; using std::cin;

int main()
{
    auto num = 0;
    auto choice = 'n';

    do
    {
        cout<<"\nEnter a number from 1-15: ";
        cin>>num;

        while (num < 1 || num > 15)
        {
            cout<<"\nInvalid Number...";
            cout<<"\nEnter a number from 1-15: ";
            cin>>num;
        }

        auto result = get_fib_number(num);
        cout<<"The Fibonacci number is: "<<result<<"\n";
        cout<<"Enter y to continue, any key to exit: ";
        cin>>choice;
        
    } 
    while(choice =='y' || choice == 'Y');

    cout<<"Bye..."<<"\n";
    
    return 0;
}