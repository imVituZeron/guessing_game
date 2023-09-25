#include <stdio.h>

void main() {
    printf("***************************\n");
    printf("* Welcome to the Our Game *\n");
    printf("***************************\n");

    int secret_number = 42;
    int kick;
    for (int i=1; i<=3; i++) {
        printf("Attempt %d of 3\n", i);
        printf("Choose a number, please: ");
        scanf("%d", &kick);
        printf("the number chosen was %d\n", kick);    
        
        int right = (kick == secret_number);

        if (right) {
            printf("Congratulations, You Right!!!\n");
            break;
        } else {
            int bigger = (kick > secret_number);
            if (bigger) {
                printf("Your number is bigger than secret number\n");
            } else {
                printf("Your number is smaller than secret number\n");
            }
        }
        printf("Game Over");
    }
}
