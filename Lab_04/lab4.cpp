#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int a,b;
  double d,e;

  
  a=9;
  b=2;

  d=9;
  e=2;

  // int / int --> int (truncats, integer division)
  cout <<  a/b << endl;

  // double / int --> double (implicit conversion, floating point division)
  cout <<  d/b << endl;
  

  // int / double --> double (implicit conversion) 
  cout <<  a/e << endl;

  // double / double --> double (no conversion needed)
  cout <<  d/e << endl;

  // result is truncated
  b = d/e;
  cout << b << endl;

  a=9;
  b=2;
  d = a/b;
  // result is truncated because the division is integer
  cout << d << endl;


  a=9;
  b=2;
  d = (double)(a/b);
  // since we do the division before casting due to (),
  // the result is an int which we then cast.
  cout << d << endl;


  a=9;
  b=2;
  d = (double)a/b;
  // by casting a to double, the result is now double
  cout << d << endl;

  // The moral of the story is
  // cast individual variable to int or double:
  // by doing (int)x or double(x) before you need a certain type
  // in the expression and make sure to check your results.

  

  return 0;
}