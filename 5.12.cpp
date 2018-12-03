#include <iostream>
using namespace std;

int main()
{
    int r;
    int c;
    int s;
    int space;

    cout << "Enter the column space: ";
    cin >> space;
    cout << endl;

    for (r = 1;r <= space;r++)
    {

      /*//First
      for (c = 1;c <= r;c++)
            cout << "*";

      for (s = space;s <= space - c;s++)
            cout << " ";

      cout << "\n";

      //Second
      for (c = space;c >= r;c--)
        cout << "*";
      for (s = 0;s <= space - c;s++)
        cout << " ";

      cout << "\n";

      // Third
      for (s = 0;s < r - 1;s++)
        cout << " ";
      for (c = 1;c <= space - s;c++)
        cout << "*";

      cout << "\n";*/

      //Forth
      for (s = space - 1;s >= r;s--)
        cout << " ";
      for (c = 1;c <= r;c++)
        cout << "*";

      cout << "\n";

    }
}
