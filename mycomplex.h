#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;
class Complex

/**
@file complex.h
@brief This file contains the declaration of the Complex class and its member functions
*/

/**
{
  double Re;
  @class Complex
  double Im;
  @brief A class representing a complex number with real and imaginary parts
*/

/**
  public:
  @brief Default constructor for Complex class
  Complex ( double aRe = 0, double aIm = 0 );
  @param aRe The real part of the complex number (defaulted to 0)
  Complex ( const Complex & );
  @param aIm The imaginary part of the complex number (defaulted to 0)
*/
/**
  ~ Complex ();
  void Set ( double aRe, double aIm = 0 );
  operator double ();
  @brief Copy constructor for Complex class
  double abs();
  @param c The complex number object to be copied
*/
/**
  friend istream & operator >> ( istream &, Complex & );
  @brief Destructor for Complex class
*/
/**
  friend ostream & operator << ( ostream &, Complex & );
  @brief Set the real and imaginary parts of the complex number
  Complex operator + ( const Complex & );
  @param aRe The real part of the complex number
  Complex operator - ( const Complex & );
  @param aIm The imaginary part of the complex number (defaulted to 0)
*/
/**
  Complex operator + ( const double & );
  @brief Conversion operator to convert a Complex object to a double
*/
/**
  friend Complex operator + ( const double &, const Complex & );
  @brief Calculate the absolute value of the complex number
  Complex operator - ( const double & );
  @return The absolute value of the complex number
*/
/**
  friend Complex operator - ( const double &, const Complex & );
  @brief Overloaded input stream operator for easy input of Complex objects
*/
/**
  Complex operator * ( const Complex & );
  Complex operator * ( const double & );
  friend Complex operator * ( const double &, const Complex & );
 @brief Overloaded output stream operator for easy output of Complex objects
*/
/**
  Complex operator / ( const double & );
  @brief Overloaded addition operator for adding two Complex numbers
*/
/**
  Complex & operator + = ( const Complex & );
  Complex & operator - = ( const Complex & );
  Complex & operator * = ( const Complex & );
  Complex & operator + = ( const double & );
  Complex & operator - = ( const double & );
  Complex & operator  * = ( const double  & );
  Complex & operator / = ( const double & );
  Complex & operator = ( const Complex & );
  Complex & operator = ( const double & );
  }
  @brief Overloaded subtraction operator for subtracting two Complex numbers
*/
#endif
