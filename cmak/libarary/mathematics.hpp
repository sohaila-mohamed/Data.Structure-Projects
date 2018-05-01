#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{
  struct Tringle {
    double a;
    double b;
    double c;

  };

double calculation( double a , double b , char operation )
{
   
  switch( operation )
  {
    case '+' :
    {
      return a + b;
    } break;
    case '-':
    {
      return a - b;
    } break;
    case '*':
    {
      return a * b;
    } break;
    case '/':
    {
      return a / b;
    } break;
    default:
    {
      return 0;
    }
  }
 
}
double haron(double a,double b ,double c)
{
  double s =((a+b+c)/2);
  double A=std::sqrt(s*((s-a)*(s-b)*(s-c)));
  return A;
}
double heron(Tringle T)
{
  return haron(T.a,T.b,T.c);
}
double GitSquare (double a)
{
    double sqare = a*a;
    return sqare;
}
}

#endif // MATHEMATICS_HPP
