//program to demonstrate the concept of bit field

#include<stdio.h>

int main()
{
 struct Calender
 {
   int day:6;         //(1-31)
   int month:5;        //(1-12)
   int year:13;        //(1-4096)
 };
 
 struct Calender obj;
 printf("size of structure  using BitField is :%d\n",sizeof(obj));    //4
 
  struct Calender2
 {
   int day;         //(1-31)
   int month;        //(1-12)
   int year;        //(1-4096)
 };
 
  struct Calender2 obj2;
 printf("size of structure without using bitfield is :%d\n",sizeof(obj2));
  
 }