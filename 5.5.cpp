#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int n;
   int value;

   cout << "Enter the number of values to be summed "
      << "followed by the values: \n";
   cin >> n;

   for ( int i = 1; i <= n; i++ )
   {
      cin >> value;
      total += value;
   }
   cout << "Sum of the " << n << " values is " << total << endl;
}
