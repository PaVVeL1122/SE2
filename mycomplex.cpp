#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

/**
  Complex :: Complex ( double aRe  , double   aIm )
{
  Re = aRe;   Im = aIm;
}
  @brief Constructor with parameters for Complex class
  Complex ::  Complex ( const Complex & aRval )
{
  Re = aRval.Re;
  Im = aRval.Im;
}
  Complex :: ~ Complex ()
  @param aRe Real part of the complex number
{
Re = 0.0;
Im = 0.0;
}
  @param aIm Imaginary part of the complex number
  void Complex ::  Set (  double aRe, double aIm ) {   Re = aRe; Im = aIm; }
  Complex :: operator double ()
{
  return abs ();
}

*/

/**
  double Complex :: abs ()
{
  return sqrt ( Re * Re + Im * Im );
}
  @brief Copy constructor for Complex class

{
  Complex Result;
  Result.Re = Re + aRval. Re;
  Result.Im = Im + aRval.Im;
  return Result;
}
  @param aRval The complex number to copy
  Complex Complex ::  operator + ( const Complex & aRval )
*/

/**
  Complex Complex :: operator - ( const Complex & aRval )
  Complex Result;
  Result.Re = Re - aRval.Re;
  Result.Im = Im - aRval.Im;
  return Result;
}
  @param aRval The complex number to copy
*/

/**
  Complex Complex :: operator + ( const double & aval )
{
  Complex result;
  result.Re = Re + aval;
  result.Im = Im;
  return result;
}
  @brief Set method to set the real and imaginary parts of the complex number
  Complex Complex :: operator - ( const  double & aRval )
{
  Complex Result( * this );
  Result.Re = Re - aRval;
  return Result;
}
  @param aRe Real part of the complex number
  Complex Complex  :: operator * ( const Complex  & aRval )
{
  Complex Result;
  Result.Re = Re * aRval.Re - Im * aRval.Im;
  Result.Im = Re * aRval.Im + Im * aRval.Re;
  return Result;
}
  @param aIm Imaginary part of the complex number
*/

/**
  Complex Complex :: operator * ( const double & aRval )
{
  Complex Result;
  Result.Re = Re * aRval;
  Result.Im = Im * aRval;
  return Result;
}
  @brief Conversion operator to convert a Complex number to a double
  Complex Complex::operator/ (const double& aRval)
{
  Complex Result;
  Result.Re = Re / aRval;
  Result.Im = Im / aRval;
  return Result;
}
  @return Absolute value of the complex number
*/

/**
  Complex & Complex :: operator + =  ( const Complex & aRval )
{
  Re + = aRval.Re;
  Im + = aRval.Im;
  return * this;
}
  @brief Method to calculate the absolute value of the complex number
  Complex & Complex :: operator - = ( const Complex & aRval )
{
  Re - = aRval.Re;
  Im  - = aRval.Im;
  return * this;
}
  @return Absolute value of the complex number
*/

  Complex & Complex :: operator * = ( const Complex & aRval )
{
  double tmpRe = Re;
  Re = Re * aRval.Re - Im * aRval.Im;
  Im = Im * aRval.Re + tmpRe * aRval.Im;
  return * this;
}

  Complex & Complex :: operator + = ( const double & aRval )
{
  Re + = aRval;
  eturn * this;
}

  Complex & Complex :: operator - = ( const double & aRval )                                      {
{
  Re - = aRval;
  return * this;
}

  Complex & Complex :: operator * = ( const  double  &  aRval )
{
  Re * = aRval;
  Im * = aRval;
  return * this;
  }

  Complex & Complex :: operator / = ( const double & aRval )
{
  Re / = aRval;
  Im / = aRval;
  return * this;
}

  Complex & Complex :: operator = ( const Complex & aRval )
{
  Re = aRval.Re;
  Im = aRval.Im;
  return * this;
}

  Complex & Complex :: operator = ( const double  aRval )
{
  Re = aRval;
  Im = 0.0;
  return * this;
}

  istream & operator >> ( istream & stream, Complex & a )
{
  char tmp [256];
  stream >> a.Re >>
a.Im >> tmp;
  return stream;
}

  ostream & operator << ( ostream & stream, Complex & a )
{
  stream << a.Re;
  if( ! ( a.Im < 0 ) ) stream << '+';
  stream << a.Im  << 'i';
  return stream;
}
/**
  Complex operator + ( const double & aLval, const Complex & aRval )
{
  Complex Result;
  Result.Re = aLval + aRval.Re;
  Result. Im =  aRval.Im;
  return Result;
}
  @brief Overloaded operator+ to add two complex numbers
  Complex operator - ( const double & aLval, const Complex & aRval )
{
  Complex Result;
  Result.Re = aLval - aRval.Re;
  Result.Im = - aRval.Im;
  return Result;
}
  @param aRval The complex number to add
  Complex operator * ( const double & aLval, const Complex & a )
{
  Complex r;
  r.Re = aLval * a.Re;
  r.Im = aLval * a.Im;
  return Result;
}
  @return Result of addition
*/
