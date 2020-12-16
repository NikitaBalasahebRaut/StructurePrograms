//program to demonstrate the concept of union
#include<stdio.h>

int main()
{
 union Demo
 {
  int i;
  char ch;
  float f;
  char ch2;
 }obj;
 
 printf("size of Demo : %d\n",sizeof(obj));
 }
 
 //output: size of Demo : 4