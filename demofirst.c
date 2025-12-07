#include<stdio.h>

int main()  //202    
{
  // data_type name_variable; 
  //   name_varaible=value;

  // data_type name_variable=value;

  int no1;
  int no2;

  int no3,no4;

  no1=100;

  printf("\nEnter value for number 2 : ");
  scanf("%d",&no2); //scanf("%d %d",&no2,&no3);
  
  no3=no1+no2;
  
  printf("\n Addition of %d  and %d is %d ",no1,no2,no3);    
  
  printf("\n Hello World!!!!!");
  //main is going to compiler my job is over
  printf("this is the last line\n");
  return 0;  
  //getch();
}

