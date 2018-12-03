#include <iostream>
using namespace std;

int main()
{
   int n = 1; //number
   int a; // accuracy of estimate
   int f = 1; //  factorial
   double e = 1.0;

   cout << "Enter desired accuracy of e: ";
   cin >> a;

   while ( n < a )
   {
      f *= n;
      e += 1.0 / f;
      n++;
   }

   cout << "e is " << e << endl;
}
