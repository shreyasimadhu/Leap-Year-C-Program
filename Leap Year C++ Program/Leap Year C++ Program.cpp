#include <iostream>
using namespace std;
int main()
{   
    int year;
    cout<<"Enter The Any Year Input Here : \n\n";
    cout<<"Year = ";
    cin>>year;
    if(year % 400 == 0)
        cout<<year<<" is Leap Year";
    else if(year % 100 == 0 )
        cout<<year<<" is not Leap Year";
    else if(year % 4 == 0 )
        cout<<year<<" is Leap Year";
    else
        cout<<year<<" is not Leap Year";
    return 0;
}