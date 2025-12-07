#include<stdio.h>

int main()
{
int num;
printf("\n Enter any integer ");
scanf("%d",&num);

if(num<0)
{
 printf("\n The number %d is negative \n",num);
}
else if(num>0)
{
 printf("\n The  number %d is positive \n",num);
}
else
 printf("\n The number %d is neutral \n",num);

return 0;
}//end main
