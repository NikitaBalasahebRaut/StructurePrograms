//program to demonstrate the oncept of padding 
//as per below program both structure have same member but on arragment of these member change its size ,it means element sequence more important in structure
#include<stdio.h>

int main()
{
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
/*output
size of Demo : 16
size of Hello : 12
*/