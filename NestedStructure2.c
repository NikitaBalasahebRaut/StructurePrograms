//program to demonstrate the concept of nested structre

#include<stdio.h>

int main()
{
  struct Demo
  {
    float f;
	struct Hello
	{
	  int i;
	  int j;
	}hobj;
	double d;
  };
  
  struct Demo dobj;
  dobj.f = 6.0;
  dobj.hobj.i = 11;
  dobj.hobj.j = 21;
  
  printf("size of Demo structure is : %d\n",sizeof(dobj));
  printf("size of Hello structre is : %d\n",sizeof(dobj.hobj));
  printf("value of f is : %f\n", dobj.f);
  printf("value of i is : %d\n", dobj.hobj.i);
  printf("value of j is : %d\n", dobj.hobj.j);
}
/*
size of Demo structure is : 24
size of Hello structre is : 8
value of f is : 6.000000
value of i is : 11
value of j is : 21

*/