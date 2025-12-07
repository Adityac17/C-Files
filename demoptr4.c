#include<stdio.h>

int main()
{

int x = 5;
int *p = &x;
int **pp = &p;

printf("%d \n", **pp);   // prints 5
printf("\n Displayes values of x %d \n",*p);
printf("\n Address of %p",p);
printf("\n Address of %p",pp);
printf("\n Address of %p",&x);
return 0;
}

