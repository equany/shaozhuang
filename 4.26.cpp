#include<iostream>
using namespace std;

int main()
{
    long int a;
    int b,c,d,f;

    cin >> a;
    if( a / 10000 >=1 && a / 10000 < 10 )
    {  b = a%10000 ;
       c = a%1 ;
       {if(b==c)
         {d = a%1000 ;
          f = a%10 ;
          if(d==f)
            cout << "YES!";
           else
            cout << "NO!";
         }
        else cout << "NO!";
        }
    }
    else cout << "ERROR!";




}
