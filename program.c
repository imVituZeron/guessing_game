#include <stdio.h>

void main() {
    printf("***************************\n");
    printf("* Welcome to the Our Game *\n");
    printf("***************************\n");

    int secret_number = 42;
    int kick;

    printf("Choose a number, please: ");
    scanf("%d", &kick);
    printf("the number chosen was %d\n", kick);    
    
    int right = (kick == secret_number);

    if (right) {
        printf("Congratulations, You Right!!!\n");
    } else {
        int bigger = (kick > secret_number);
        if (bigger) {
            printf("Your number is bigger than secret number");
        } else {
            printf("Your number is smaller than secret number");
        }
    }
}
