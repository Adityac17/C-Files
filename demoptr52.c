#include<stdio.h>


void swap(int a, int b)
{
 int temp;
 temp=a;
  a=b;
  b=temp;
}

int main()
{
int x=5, y=10;
printf("\n Before Swap the value of x is %d",x);
printf("\n Before Swap the value of y is %d",y);
//swap(x,y);
swap(x,y);
printf("\n After Swap the value of x is %d",x);
printf("\n After Swap the value of y is %d \n",y);
return 0;
}

