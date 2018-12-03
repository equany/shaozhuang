#include <iostream>
using namespace std;

int main()
{
   double r;
   double pi = 3.14159;

   cout << "Enter the radius: ";
   cin >> r;

   cout << "The diameter is " << r * 2.0 << endl;

   cout << "The circumference is " << 2.0 * pi * r << endl;

   cout << "The area is " << pi * r * r << endl;
}
