#include<iostream>
#include<string>
#include "question4.h"

using std::cout; using std::cin;
using std::string;

int main()
{
    double num = 0;
    auto choice = 'y';

    do
    {
        cout<<"\nEnter your gpa score (0-4): ";
        cin>>num;

        while (num < 0 || num > 4)
        {
            cout<<"\nInvalid Number...";
            cout<<"\nEnter your gpa score (0-4): ";
            cin>>num;
        }

        auto result = gpa_to_letter_grade(num);
        cout<<"Your grade is: "<<result<<"\n";
        cout<<"Enter y to exit, any key to continue: ";
        cin>>choice;
        
    } 
    while(choice !='y' && choice != 'Y');

    cout<<"Bye..."<<"\n";

    return 0;
}