//Program to demonstrate the concept of structure with predefine data type
#include<stdio.h>

int main()
{
 struct Demo
 {
  int i;
  float f;
  double d;
 };
 struct Demo obj;
 
 obj.i = 51;
 printf("%d\n",obj.i);
 
  obj.f = 13.14f;
 printf("%f\n",obj.f);
 
  obj.d = 563.654;
 printf("%lf\n",obj.d);
 
 printf("%d\n",sizeof(obj));   //use obj if we use Demo it give error undeclare
 
 }
 
 /*
 output
 51
 13.140000
 563.654000
16

*/