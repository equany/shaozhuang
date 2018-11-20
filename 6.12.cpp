#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges( double hours )
{
   double charge;
   if ( hours < 3.0 )
      charge = 2.0;
   else
      charge = 2.0 + .5 * ceil( hours - 3.0 ); //ceil 向大取整
   return ( charge > 10.0 ? 10.0 : charge ); //条件计算并返回
}

int main()
{
   double hour;
   double currentCharge;
   double totalCharges = 0.0;
   double totalHours = 0.0;
   bool first = true; // used for printing table headers

   cout << fixed;
   cout << "Enter the hours parked for 3 cars: ";

   for ( int i = 1; i <= 3; i++ ) //
   {
      cin >> hour;
      totalHours += hour;

      if ( first )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"
            << setw( 15 ) << "Charge\n";

         first = false; // prevent from printing again
      }

      currentCharge = calculateCharges( hour );
      totalCharges += currentCharge;

      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour  //小数点后一位
         << setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";   //小数点后两位
   } //end for
    cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
      << totalHours << setw( 14 ) << setprecision( 2 )
      << totalCharges << endl;
}
// calculateCharges returns charge according to number of hours
