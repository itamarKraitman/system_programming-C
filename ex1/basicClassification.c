#include <stdio.h>
#include <math.h>

//first file
//return if an integer is prime
int isPrime(int numberToCheck) {
    for(int i = 2; i <= sqrt(numberToCheck); i++) {
            if((numberToCheck % i) == 0) {
                return 0;
         }
    }
    return 1;
}

//return if an integer is strong
int isStrong(int numberToCheck) {
    int sum = 0;
    int number = numberToCheck
    while(number > 9) {
        sum += factorial(number % 10);
        number = number / 10;
    }
    sum += factorial(number);
    if(sum == number) {
        return 1;
    }
    else {
        return 0;
    }
}
//computing factorial
int factorial(int number) {
    if(number == 1) {
        return 1;
    }
    return  factorial(number - 1) * number;
}


