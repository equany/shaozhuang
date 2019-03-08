#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
#include <string>

class Matrix
{
   friend std::ostream &operator<<( std::ostream &, const Matrix & );
   friend std::istream &operator>>( std::istream &, Matrix & );
private:
   std::string firstLine;
   std::string secondLine;
   std::string thirdLine;
};
#endif // MATRIX_H_INCLUDED
