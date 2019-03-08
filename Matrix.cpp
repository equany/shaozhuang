#include <iomanip>
#include "Matrix.h"
using namespace std;

ostream &operator<<( ostream &output, const Matrix &m1 )
{
   output << "(" << m1.firstLine << ")" << endl;
   output << "(" << m1.secondLine << ")" << endl;
   output << "(" << m1.thirdLine << ")" << endl;
   return output;
}

istream &operator>>( istream &input, Matrix &m1 )
{
   input >> setw( 3 ) >> m1.firstLine;
   input.ignore();
   input >> setw( 3 ) >> m1.secondLine;
   input.ignore();
   input >> setw( 3 ) >> m1.thirdLine;
   return input;
}
