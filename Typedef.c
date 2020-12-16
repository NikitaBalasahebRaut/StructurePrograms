//program to demonstrate the concept of typedef
//program to demonstrate the concept of typedef
#include<stdio.h>

int main()
{
  struct Demo
  {
    int i;
	int j;
  };
  
  typedef struct Demo DEMO;
  typedef struct Demo* PDEMO;
  typedef struct Demo** PPDEMO;
  
  DEMO obj;
  
  obj.i = 11;
  obj.j = 21;
  PDEMO p = &obj;
  PPDEMO q = &p;
  
  printf("Value of p is : %d\n",p);
  printf("Value of q is : %d\n",q);
  printf("Adress of p is : %d\n",&p);
  printf("Adress of q is : %d\n",&q);
  printf("value of i is by using pointer:%d\n", p->i);
  printf("value of i is by using pointer:%d\n", p->i);
  printf("value of j by using object is :%d\n",obj.j);
  printf("Adress of structure is:%d",&obj);

  return 0;
  }
  
  /*
  Value of p is : 6422296
Value of q is : 6422292
Adress of p is : 6422292
Adress of q is : 6422288
value of i is by using pointer:11
value of i is by using pointer:11
value of j by using object is :21
Adress of structure is:6422296
*/