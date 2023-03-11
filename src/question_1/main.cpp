#include<iostream>
#include<string>
#include "question1.h"

using std::cout; using std::cin;
using std::string;

int main()
{
    string str;
    auto choice = 'n';

    do
    {
        cout<<"\nEnter a string: ";
        cin>>str;

        auto palindorme = is_palindrome(str);
        if(palindorme == true)
        {
            cout<<"True"<<"\n";
            cout<<str<<" is palindorme."<<"\n";

        }
        else
        {
            cout<<"false"<<"\n";
            cout<<str<<" is not palindorme."<<"\n";
        }

        cout<<"Enter y to continue, any key to exit: ";
        cin>>choice;
        
    } 
    while(choice =='y' || choice == 'Y');

    cout<<"Bye..."<<"\n";
    

    return 0;
}