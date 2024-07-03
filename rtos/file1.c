#include <stdio.h>
#include <string.h>

int main() {
    char strA[] = "test";
    char strB[3]; //= "test";
    const char *strC = "test";

    strcpy(strB, strA);

<<<<<<< HEAD
    //strB = strC;


=======
>>>>>>> 5f2bb33 (Remove garbage information)
    printf(strB);

    return 0;
}
