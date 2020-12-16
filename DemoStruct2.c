#include<stdio.h>

int main()
{
 struct Demo
 {
  int i;
  float f;
  double d;
 };
 struct Demo obj = {51,3.0,6.0};
 
 printf("%d\n",obj.i);
 printf("%f\n",obj.f);
 printf("%lf\n",obj.d);
 
 printf("%d\n",sizeof(obj));   //use obj if we use Demo it give error undeclare
 
 }
 
 /*
 51
3.000000
6.000000
16
*/