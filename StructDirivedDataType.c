//program to demonstrate the concept of structure with derived data typedef

#include<stdio.h>

int main()
{
  struct  Demo
  {
    int arr[3];
	int *p;
  }dobj;
  
  dobj.arr[0] = 11;
  dobj.arr[1] = 21;
  dobj.arr[2] = 51;
  
  int no = 101;
  dobj.p = &no;
  
  printf("value of no is : %d\n",no);
  printf("Adress of no is: %d\n",&no);
  printf("Value of pointer p (contain adress of no)%d\n",dobj.p);
  printf("size of structure : %d\n",sizeof(dobj));          //12+4= 16byte
  printf("value of arr[0]index : %d\n",dobj.arr[0]);
  printf("value of arr[1]index : %d\n",dobj.arr[1]);
  printf("value of arr[2]index : %d\n",dobj.arr[2]);
}
  /*
  output:
  value of no is : 101
Adress of no is: 6422284
Value of pointer p (contain adress of no)6422284
size of structure : 16
value of arr[0]index : 11
value of arr[1]index : 21
value of arr[2]index : 51
*/