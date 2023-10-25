#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Input number 1: ");
    scanf("%d", &num1);
    printf("Input number 2: ");
    scanf("%d", &num2);
    
    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 < num2) ? num2 : num1;
    
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz");
        } else if (i % 3 == 0) {
            printf("Fizz");
        } else if (i % 5 == 0) {
            printf("Buzz");
        } else {
            printf("%d", i);
        }
        
        if (i < end) {
            printf(", ");
        }
    }
    
    printf("\n");

    return 0;
}
