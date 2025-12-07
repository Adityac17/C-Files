#include<stdio.h>

void check_num()
{
int num1;
printf("Enter the number: ");
scanf("%d",&num1);

if(num1<0)
{
printf("The %d is negative ",num1);
}
else if(num1>0)
{
printf("The %d is positive " ,num1);
}
else 
{printf("The no is zero " );
}
}

int main()
{
check_num();
return 0;
}

