#include<iostream>
#include<string>
#include "question3.h"

using std::cout; using std::cin;
using std::string;


int main()
{
    auto num = 0;
    auto choice = 'y';

    do
    {
        cout<<"\nEnter an integer from 1 to 255: ";
        cin>>num;

        while (num < 1 || num > 255)
        {
            cout<<"\nInvalid Number...";
            cout<<"\nEnter an integer from 1 to 255: ";
            cin>>num;
        }

        auto result = decimal_to_binary(num);
        cout<<"Your number is: "<<num<<"\n";
        cout<<"The binary number is: "<<result<<"\n";
       
        cout<<"\nEnter y to exit, any key to continue: ";
        cin>>choice;
        
    } 
    while(choice !='y' && choice != 'Y');

    cout<<"Bye..."<<"\n";

    return 0;
}