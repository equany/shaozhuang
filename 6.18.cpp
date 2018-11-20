#include <iostream>
using namespace std;

int integerPower( int b, int e )
{
   int p = 1;//½á¹û

   for ( int i = 1; i <= e; i++ )
      p *= b;

   return p;
}

int main()
{
   int exponent;
   int base;

   cout << "Enter base and exponent: ";
   cin >> base >> exponent;
   cout << base << " to the power " << exponent << " is: "
      << integerPower( base, exponent ) << endl;
}

