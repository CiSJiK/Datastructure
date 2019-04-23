#include <stdio.h>
#define MAX(a, b) (((a) > (b))? (a):(b))//최대값 비교
#define M 101//MAX_DEGREE
typedef struct { int d; float coef[MAX_DEGREE);}p;//Polynomial(다항식)
polynomial poly_add1(polynomial a, polynomial b)
{
  p c;
  int ap = 0, bp = 0, cp = 0;
  int d1 = a.d;
  int d2 - b.d;
  c.d = MAX(a.d, b.d);
  while(ap <= a.d && bp <= b.d)
  {
    if(d1 > d2)
    {
      c.coef[cp++] = a.coef[ap++];
      d1--;
    }
    else if(d1 == d2)
    {
      c.coef[cp++] = a.coef[ap++]+b.coef[bp++];
      d1--; d2--;
    }
    else
    {
      c.coef[cp++] = b.coef[bp++];
      d2--;
    }
  }
  return c;
}
void main()
{
  p a = {5, {3, 6, 0, 0, 0, 10} };
  //print polynomial a
  p b = {4, {7, 0, 5, 0, 1} };
  //print polynomial b
  p c = poly_add1(a, b);
  //print polynomial c
}
