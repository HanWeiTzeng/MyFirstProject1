#include <stdio.h>


void sort (int *, int *);
int main() {
    int a = 3, b= 4;

    printf("a= %d, b = %d\n", a, b);
    sort(&a, &b);
    printf("a= %d, b = %d\n", a, b);

    return 0;
}

void sort (int *n, int *m) {
    if (*m > *n) {
        swap(n, m);
    }
}

void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}


















/*
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
�P�Ťߥ����*/
/*
int main() {
    int id, sum = 0;

    printf("Please enter the id of items:\n");
    do {
        scanf("%d", &id);
        switch (id) {
            case 1:
                sum += 90;
                break;
            case 2:
                sum += 75;
                break;
            case 3:
                sum += 83;
                break;
            case 4:
                sum += 89;
                break;
            case 5:
                sum += 71;
                break;
        }
    } while (id != 0);

    printf("Total = %d", sum);
    return 0;
}
*/



/*

#include <stdio.h>

int main() {
    int add_num;
    int sum = 0;
    int count = 0;
    float average;

    printf("Please enter n to average them all (Enter 0 to quit.):\n");
    scanf("%d", &add_num);

    while(add_num != 0) {
        sum = sum + add_num;
        count = count + 1;
        scanf("%d", &add_num);
    }
    average = (float) sum / (count);
    if (add_num ==0 && count == 0)
        printf("The average is N/A.");
    else
        printf("Average = %f", average);

    return 0;
}

Average*/

/*
#include <stdio.h>
int main() {
    int answer = 66;
    int guess;
    int count = 0;

    while (count == 0 || guess != answer) {
        printf("Please enter a n to guess the answer(0~100):");
        scanf("%d", &guess);
        count= count + 1;
        if (guess > answer)
            printf("The n is too big.\n");
        else if (guess < answer)
            printf("The n is too small.\n");

    }
    printf("%d is the answer.\n You spend %d times to guess.", guess, count);

    return 0;
}
�q�Ʀr*/


/*
int main() {
    int answer = 66, count = 0;
    //int guess = -1;  �o�˰����n
    int guess;

    printf("Please enter a n to guess the answer(0~100):");    �o�ˤ]���O�̦n
    scanf("%d", &guess);
    count++;

    while (guess != answer) {
        if (guess > answer)
            printf("The n is too big.\n");
        //else if (guess < answer)       // ---> �����ӳo�˼g�A�]��"="�w�g�Q�~��ױ��F�A�ҥH�i������else.
        else
            printf("The n is too small.\n");
        printf("Please enter a n to guess the answer(0~100):");
        scanf("%d", &guess);
        count++;
    }
    printf("%d is the answer. You spend %d times to guess.", guess, count);

    return 0;
}
�q�Ʀr ²���*/


/*
int main() {
    int num;
    printf("Please enter your ID n to check your name:");
    scanf("%d", &num);

    switch (num) {
        case 2:
            printf("You are John.\n");
            break;
        case 13:
            printf("You are Mary.\n");
            break;
        case 16:
            printf("You are Amy.\n");
            break;
        default:
            printf("This ID is empty.");
            break;
    }
    return 0;
}
switch*/
