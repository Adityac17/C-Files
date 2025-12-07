#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w"); // open in write mode
    fprintf(fp, "Hello File Handling in C!\n");
    fclose(fp);
    return 0;
}

