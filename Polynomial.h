#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

class Polynomial
{
private:
   int numberOfTerms;
   int exponents[ maxTerms ]; // exponent array
   int coefficients[ maxTerms ]; // coefficients array
   static void polynomialCombine( Polynomial & );

public:
   static const int maxTerms = 100;

   Polynomial();
   Polynomial operator+( const Polynomial & ) const;
   Polynomial operator-( const Polynomial & ) const;
   Polynomial operator*( const Polynomial & ) const;
   Polynomial &operator=( const Polynomial & );
   Polynomial &operator+=( const Polynomial & );
   Polynomial &operator-=( const Polynomial & );
   Polynomial &operator*=( const Polynomial & );
   void enterTerms();
   void printPolynomial() const;
   int getNumberOfTerms() const;
   int getTermExponent( int ) const;
   int getTermCoefficient( int ) const;
   void setCoefficient( int, int );
   ~Polynomial();

};

#endif


#endif // POLYNOMIAL_H_INCLUDED
