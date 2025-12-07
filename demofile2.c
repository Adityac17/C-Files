#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];
    fp = fopen("data.txt", "r"); // open in read mode
    while (fgets(text, 100, fp)) {
        printf("%s", text);
    }
    fclose(fp);
    return 0;
}


