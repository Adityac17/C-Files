#include<stdlib.h>
#include<stdio.h>

int main()
{
int *p = (int*)malloc(5 * sizeof(int));  // allocates memory for 5 integers
free(p);   // releases memory
printf("\n size of int is %ld",sizeof(int));

//special pointer pointing to nothing
int *p1 = NULL;
if (p1 == NULL) {
    printf("Pointer is empty");
}


//dangling pointer or orphan pointer

int *p2 = (int*)malloc(sizeof(int));
free(p2);
printf("\n example of undefined behaviour %d \n", *p2); // ❌ Undefined behavior

//void pointer
void *vp;
int x = 10;
vp = &x;
printf("void pointer example %d \n", *(int*)vp);

return 0;
}
