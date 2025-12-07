#include <stdio.h>

int main() {   
// void main()  {   }  windows turbo c c++
    int i;
    float f1;
    double d1;
    char c1;
    char str[100]; // 100 blocks of characters 
    //array : similar of data type elements  
    // no data type string

    // Input section
    printf("Enter an integer: ");
    scanf("%d", &i);  //address of i

    printf("Enter a float: ");
    scanf("%f", &f1);

    printf("Enter a double: ");
    scanf("%lf", &d1);  
    // %d - integer %f-float  long float-double %lf

    printf("Enter a character: ");
    scanf(" %c", &c1);  // space before %c to avoid newline issue

    printf("Enter a string (no spaces): ");
    scanf("%s", str);  //

    // Output section
    printf("\n--- You Entered ---\n"); //draft
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f1);  // %.2f   9.898989   9.89
    printf("Double: %.4lf\n", d1); // %.4lf  
    printf("Character: %c\n", c1);
    printf("String: %s\n", str);

    return 0;
}

