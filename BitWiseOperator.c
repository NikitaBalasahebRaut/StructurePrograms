//program to demonstrate the concept of bitwise operator

#include<stdio.h>

int main()
{
 int x = 15;
 int y = 21;
 int ans = 0;
 printf("value of x after performation ~ operation:%d\n",~x);
 ans = x&y;
 printf("Result of & operation is :%d\n",ans);
 ans = x|y;
 printf("Result of | operation is:%d\n",ans);
 ans = x^y;
 printf("Result of ^ operation is:%d\n",ans);
 ans = x<<2;
 printf("value of x after performation << operation:%d\n",ans);
 ans = y<<2;
 printf("value of y after performation >> operation:%d\n",ans);
 
 return 0;
 }
 /*
 output:
 value of x after performation ~ operation:-16
Result of & operation is :5
Result of | operation is:31
Result of ^ operation is:26
value of x after performation << operation:60
value of y after performation >> operation:84
*/