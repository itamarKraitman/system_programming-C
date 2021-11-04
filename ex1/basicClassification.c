#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define TRUE 1
#define FALSE 0

//return if an integer is prime
int isPrime(int numberToCheck) {
    for(int i = 2; i <= sqrt(numberToCheck); i++) {
            if((numberToCheck % i) == 0) {
                return FALSE;
         }
    }
    return TRUE;
}

//return if an integer is strong
int isStrong(int numberToCheck) {
    int sum = 0;
    int number = numberToCheck;
    while(number > 9) {
        sum += factorial(number % 10);
        number = number / 10;
    }
    sum += factorial(number);
    if(sum == number) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

//computing factorial
int factorial(int number) {
    if(number == 1) {
        return 1;
    }
    return  factorial(number - 1) * number;
}


