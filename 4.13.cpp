#include<iostream>
using namespace std;

int main()
{
    int miles;
    int gallons;    //ÏûºÄ
    double MPG;
    double total;     //total MPG

    cout<<"Enter miles driven (-1 to quit): ";
    cin>>miles;
    while (miles != -1)
    {
        cout<<"Enter gallors used: ";
        cin>>gallons;
        cout<<"MPG this trip: ";
        cin>>MPG;
        cout<<"Total MPG: ";
        cin>>total;
        cout<<endl;
        cout<<"Enter miles driven (-1 to quit): ";
        cin>>miles;
    }

}
