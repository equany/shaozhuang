#include <iostream>
using namespace std;

int main()
{
   int n; // number
   int f = 1; // factorial

   cout << "Enter an Integer: ";
   cin >> n;

   cout << n << "! is ";

   while ( n > 0 )
   {
      f *= n;
      n--;
   }

   cout << f << endl;
}

