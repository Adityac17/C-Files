#include<stdio.h>

int main()
{
int x = 10;
int *p = &x;   // p stores address of x

printf("%p \n", p);   // prints 10

return 0;
}

