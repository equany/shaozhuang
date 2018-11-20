#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double ApproximateIntegers( double )
{
    double value;
	return floor( value + .5 ); //floor向小取整
}

int main()
{
   double x;
   double y;

   cout << fixed;

   for ( int i = 1; i <= 5; i++ )
   {
      cout << "Enter a number: ";
      cin >> x;

      y = ApproximateIntegers( x );
      cout << setprecision( 6 ) << x << " rounded is "
         << setprecision( 1 ) << y << endl;
   } // end for
} // end main



