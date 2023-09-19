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

}
