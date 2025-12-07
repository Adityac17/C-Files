#include <stdio.h>
int main() {
 printf("ASCII Table\n");
 printf("-----------\n");
 printf("Decimal\t\tCharacter\n");
 printf("------------------------\n");
 for (int i = 0; i < 128; ++i) {
 printf("%d\t\t%c\n", i, (char)i);
 }
 return 0;
}

