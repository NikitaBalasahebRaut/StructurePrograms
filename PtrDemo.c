#include<stdio.h>
int main()
{
    struct Demo
    {
		int i;
		float f;
		int j;
    }obj;
    struct Demo *ptr = NULL;
	ptr = &obj;
	
	printf("size of sructure:%d\n",sizeof(obj));  //12
	printf("size of pointer:%d\n",sizeof(ptr)); //it display size of poiner on our pc 4 byte
	printf("size of pinted structure:%d\n",sizeof(*ptr));//12 display the size of structure that having adress
	
	printf("value of ptr:%d\n",ptr);      //6422292
	printf("adress of ptr:%d\n",&ptr);     //6422288
	printf("adress of structure:%d\n",&obj);   //6422292
	
	printf("value of i by using pointer:%d\n", ptr->i = 101);
	printf("value of f by using pointer:%f\n", ptr->f = 102);
	printf("value of j by using pointer:%d\n", ptr->j = 103);
	
	printf("value of i by using object : %d\n",obj.i);
	printf("value of f by using object : %f\n",obj.f);
    printf("value of j by using object : %d\n",obj.j);
	
    return 0;
}