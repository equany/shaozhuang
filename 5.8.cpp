#include <iostream>
using namespace std;

int main()
{
   int n;
   int value;
   int smallest;

   cout << "Enter the number of integers: " << endl;
   cin >> n >> smallest;

   for ( int i = 2; i <= n; i++ )
   {
      cin >> value;

      if ( value < smallest )
         smallest = value;
   }
   cout << "The smallest integer is: " << smallest << endl;
}
