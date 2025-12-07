#include<stdio.h>

int div(int h1,int h2)
{
int div1;
div1= h1/h2;
return div1;

}

int main()
{
int n1;
int n2;
int temp;
printf("Enter 2 no : ");
scanf("%d %d" , &n1,&n2);

temp=div(n1,n2);
printf("The result is %d\n", temp);
return 0;
}
