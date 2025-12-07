#include<stdio.h>
void mult(int n1,int n2); //declaration

 void add(int n1,int n2) //formal parameters
{
 int temp;
 temp=n1+n2;
 printf("\n Addition is %d ",temp);
}

 int main()
{

 int no1,no2;  // local varaibles
 printf("Enter num1 , num2");
 scanf("%d %d",&no1,&no2); 

 add(no1,no2);  //calling func  actual parameters
 return 0;
}
