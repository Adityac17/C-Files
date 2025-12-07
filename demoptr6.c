#include<stdio.h>
#include<stdlib.h>

int main()
{
system("clear"); 
int arr[4] = {10, 20, 30};
int *p = arr;
int i,len;

len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++)
printf("%d \n", *(p+i));  // prints all elements of arr

return 0;
}
