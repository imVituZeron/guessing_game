#include <stdio.h>

void main() {
    printf("***************************\n");
    printf("* Welcome to the Our Game *\n");
    printf("***************************\n");

    int kick;
    int secret_number = 42;
    int attempt = 1;

    int points = 1000;

    while (1) {
        printf("Attempt %d\n", attempt);
        printf("Choose a number, please: ");
        scanf("%d", &kick);
        printf("the number chosen was %d\n", kick);

        if (kick < 0) {
            printf("Invalidate negative numbers!\n");
            continue;
        }
        
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

        attempt++;
        int negative_points = (kick - secret_number) / 2;
        points = points - negative_points;
    }
    printf("Game Over\n");
    printf("You got it right in %d attempts\n", attempt);
    printf("Points: %d\n", points);
}
