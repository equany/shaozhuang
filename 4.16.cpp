#include<iostream>
using namespace std;
int main()
{
    int hours;
    float salary;
    float regular;

    cout<<"Enter hours worked (-1 to quit):";
    cin>>hours;

    while(hours != -1)
        {cout<<"Enter hourly rate of the employee ($00.00):";
         cin>>regular;
         if(hours<=40)
            salary=hours*regular;
         else
            salary=(hours-40)*regular*1.5+40*regular;
         cout<<"Salary is: $"<<salary<<endl;
         cout<<endl;
         cout<<"Enter hours worked (-1 to quit):";
         cin>>hours;
        };
}
