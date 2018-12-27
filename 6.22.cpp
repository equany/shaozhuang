#include <iostream>
using namespace std;

int square( int side )
{
   for ( int row = 1; row <= side; row++ )
   {
      for ( int col = 1; col <= side; col++ )
         cout << '*';
      cout << endl;
   }
}

int main()
{
   int side;

   cout << "Enter side: ";
   cin >> side;
   square( side );
}

