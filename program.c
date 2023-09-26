#include <stdio.h>

//constant
#define FINAL_NUMBER 5

void main() {
    printf("***************************\n");
    printf("* Welcome to the Our Game *\n");
    printf("***************************\n");

    int kick;
    int secret_number = 42;

    for (int i=1; i<=FINAL_NUMBER; i++) {
        printf("Attempt %d of %d\n", i, FINAL_NUMBER);
        printf("Choose a number, please: ");
        scanf("%d", &kick);
        printf("the number chosen was %d\n", kick);    
        
        int right = (kick == secret_number);
        int bigger = (kick > secret_number);

        if (right) {
            printf("Congratulations, You Right!!!\n");
            break;
        } else if (bigger) {
            printf("Your number is bigger than secret number\n");
        } else {
            printf("Your number is smaller than secret number\n");
        }
    }
    printf("Game Over\n");
}
