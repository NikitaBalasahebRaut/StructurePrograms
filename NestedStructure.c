//program to demonstrate the concept of nested structure

#include<stdio.h>

int main()
{
  struct Hello
  {
    int i;
	int j;
  };
  
  struct Demo
  {
    float f;
	struct Hello hobj;
	double d;
  };
  
  struct Demo dobj;
  printf("Size of struct Hello is : %d\n",sizeof(dobj.hobj));
  printf("Size of struct Demo is: %d\n",sizeof(dobj));
  
  dobj.hobj.i = 20;
  dobj.hobj.j = 30;
  printf("value of i:%d\n",dobj.hobj.i);
  printf("value of j:%d\n",dobj.hobj.j);
  
  dobj.f = 20.0;
  dobj.d = 30.20;
  printf("value of f:%f\n",dobj.f);
  printf("value of d:%lf\n",dobj.d);
  
  return 0;
  }
  /*
  output:
Size of struct Hello is : 8
Size of struct Demo is: 24
value of i:20
value of j:30
value of f:20.000000
value of d:30.200000


*/