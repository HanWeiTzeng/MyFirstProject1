#include <stdio.h>
#include <string.h>

int main() {
    char strA[] = "test";
    char strB[3];
    const char *strC = "test";

    strcpy(strB, strA);

    printf(strB);

    return 0;
}
