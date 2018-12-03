#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
   bool isRTriangle = false;

   cout << "Enter 3 sides: ";
   cin >> a >> b >> c;
   int a2 = a * a;
   int b2 = b * b;
   int c2 = c * c;

   if ( a2 + b2 == c2 )
     isRTriangle = true;
   else if ( b2 + c2 == a2 )
      isRTriangle = true;
   else if ( c2 + a2 == b2 )
      isRTriangle = true;

   if ( isRTriangle )
      cout << "These are the sides of a right triangle." << endl;
   else
      cout << "These do not form a right triangle." << endl;
} // end main
