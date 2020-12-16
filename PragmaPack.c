//program to demonstrate the concept of #pragma pack()
#include<stdio.h>

int main()
{
#pragma pack(1)   //displacement factor (1,2,4,8,16,32)
 struct Demo
 {
  int i;
  char ch;
  float f;
  char ch2;
 }obj;
 
 printf("size of Demo : %d\n",sizeof(obj));
  
  struct Hello
 {
  int i;
  char ch;
  char ch2;
  float f;
 }obj2;
 
  printf("size of Hello : %d\n",sizeof(obj2));
}
/*
output:
size of Demo : 10
size of Hello : 10
*/