#include<iostream>
using namespace std;

int main()
{
    int counter=0;
    double n1=0,n2=0;
    double l1,l2;
    cin>>n1>>n2;

    if(n1>n2)
        l1=n1;
        l2=n2;
    else
        l1=n2;
        l2=n1;

    while(counter<=10)
    {
        double n3;
        cin>>n3;
        if(n3>l1)
            l2=l1;
            l1=n3;
        else if(l2>n3)
            l2=n3;
        counter += 1;
    }
    cout<<"The largest number : "<<l1<<" "<<l2;
    return 0 ;
}

