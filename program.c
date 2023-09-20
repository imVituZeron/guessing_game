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
    
    if (kick == secret_number) {
        printf("Congratulations, You Right!!!\n");
    } else {
	if (kick > secret_number) {
	    printf("Your number is bigger than secret number");
	}

	if (kick < secret_number) {
	    printf("Your number is smaller than secret number");
	}
    }
}
