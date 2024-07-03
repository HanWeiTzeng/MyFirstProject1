#include <stdio.h>
#include <string.h>

int main() {
    char strA[] = "test";
    char strB[3]; //= "test";
    const char *strC = "test";


    strcpy(strB, strA);

    //strB = strC;
    //strA = strC;


    printf(strB);

    return 0;
}
