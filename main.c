#include <stdio.h>

void funcFizzBuzz(int num1, int num2);

int main(void){
    int num1;
    int num2;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    funcFizzBuzz(num1, num2);

    return 0;
}

void funcFizzBuzz(int num1, int num2){
    int results[num2 - num1 + 1];
    int i = 0;
    if(num2 > num1){
        for(;num1 <= num2; num1++){

            if(num1 % 3 == 0 && num1 % 5 == 0){
                results[i] = -1; // FizzBuzz
                i++;
            }else if(num1 % 3 == 0){
                results[i] = -2; // Fizz
                i++;
            }else if(num1 % 5 == 0){
                results[i] = -3; // Buzz
                i++;
            }else{
                results[i] = num1;
                i++;
            }


        }
        for(int j = 0; j < i; j++){
            if(results[j] == -1){
                printf("FizzBuzz ");
            }else if(results[j] == -2){
                printf("Fizz ");
            }else if(results[j] == -3){
                printf("Buzz ");
            }else{
                printf("%d ", results[j]);
            }
        }
    }else{
        for(;num2 <= num1; num2++){

            if(num2 % 3 == 0 && num2 % 5 == 0){
                results[i] = -1; // FizzBuzz
                i++;
            }else if(num2 % 3 == 0){
                results[i] = -2; // Fizz
                i++;
            }else if(num2 % 5 == 0){
                results[i] = -3; // Buzz
                i++;
            }else{
                results[i] = num2;
                i++;
            }


        }
        for(int j = 0; j < i; j++){
            if(results[j] == -1){
                printf("FizzBuzz ");
            }else if(results[j] == -2){
                printf("Fizz ");
            }else if(results[j] == -3){
                printf("Buzz ");
            }else{
                printf("%d ", results[j]);
            }
        }
    }
}
