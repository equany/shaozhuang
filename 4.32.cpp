#include <iostream>
using namespace std;

int main()
{
   double a;
   double b;
   double c;
   bool isTriangle;

   cout << "Enter 3 sides :";
   cin >> a >> b >> c;

   if ( a + b > c )
   {
      if ( b + c > a )
      {
         if ( c + a > b )
            isTriangle = true;
      }
   }

   if ( isTriangle )
      cout << "These could be sides to a triangle." << endl;
   else
      cout << "These do not form a triangle." << endl;
}
