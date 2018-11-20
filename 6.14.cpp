#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );

double roundToInteger( double n )
{
   return floor( n + .5 );
}//取整

double roundToTenths( double n )
{
   return floor( n * 10 + .5 ) / 10;
}//取十分位

double roundToHundredths( double n )
{
   return floor( n * 100 + .5 ) / 100;
}//取百分位

double roundToThousandths( double n )
{
   return floor( n * 1000 + .5 ) / 1000;
} //取千分位

int main()
{
   int c;
   double number;
   cout << fixed;
   cout << "Enter number: ";
   cin >> number;

   cout << number
        << " rounded to the nearest integer is:  "
        << setprecision( 0 ) << roundToInteger( number ) << '\n';

   cout << setprecision( 6 ) << number
        << " rounded to the nearest tenth is:  "
        << setprecision( 1 ) << roundToTenths( number ) << '\n';

   cout << setprecision( 6 ) << number
        << " rounded to the nearest hundredth is:  "
        << setprecision( 2 ) << roundToHundredths( number ) << '\n';

   cout << setprecision( 6 ) << number
        << " rounded to the nearest thousandth is:  "
        << setprecision( 3 ) << roundToThousandths( number ) << '\n';
} // end main
