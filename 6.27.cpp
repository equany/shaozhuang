#include <iostream>
using namespace std;

double smallest( double, double, double ); // function prototype

int main()
{
   double x; // first input
   double y; // second input
   double z; // third input

   cout << "Enter three numbers: ";
   cin >> x >> y >> z;

   // determine smallest value
   cout << "The smallest value is " << smallest( x, y, z ) << endl;
} // end main

double smallest( double a, double b, double c )
{
   if ( a <= b && a <= c )
      return a;
   else if ( b <= a && b <= c )
      return b;
   else
      return c;
}
