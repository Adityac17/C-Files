#include<stdio.h>

int main()
{
 int i;

 printf("\n ----- For loop -----");
 for(i=0;i<=6;i++)
  printf("\n Number is %d \n",i);

 printf("\n ----- While loop -----");
 i=0;
 while(i<=6)
 {
  printf("\n Number is %d \n",i);
  i++;
 }

 i=0;
 printf("\n ----- Do while loop -----");
 do
 {
  printf("\n Number is %d \n",i);
  i++;
 }while(i<=6);
 
 return 0;
}
