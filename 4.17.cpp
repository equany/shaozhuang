#include<iostream>
using namespace std;

int main()
{
    int counter=0;
    double number=0;
    double largest=0;

    while(counter<=10)
    {
        cin>>number;
        if(largest<number)
            largest=number;
        counter += 1;
    }
    cout<<"The largest number : "<<largest;
    return 0 ;
}
