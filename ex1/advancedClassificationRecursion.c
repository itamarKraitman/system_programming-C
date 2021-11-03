#include <stdio.h>
#include <math.h>
//#define TRUE = 1, FALSE = 0
//does not work!!

int isPalindrom(int numberToCheck) {
    int number = numberToCheck;
    int digits = numOfDigits(number);
    if(number < 10) {
        return 1;
    }
    else if(digits == 2 ) {
        if(number % 10 == number / 10) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if(number / (int) pow(10,digits - 1) != number % 10) {
        return 0;
    }
    else {
        int toReduce = number - (number / (int) pow(10,digits - 1)); 
        int newNumberToCheck = toReduce % 10;
        isPalindrom(newNumberToCheck);
    }
}

//does not work well
int isArmstrong(int numberToCheck) {
    int number = numberToCheck;
    int numberOfDigits = numOfDigits(number);
    int sum = 0;
    if(number < 10) {
        return 1;
    }
    else if(pow(number % 10, numberOfDigits) > number) {
        return 0;
    }
    else {
        sum = isArmstrong(number / 10) + pow(number % 10, numberOfDigits)
    }
    if(sum == numberToCheck) {
        return 1;
    }
    else {
        return 0;
    }
}

//compute number of digits in muber
int numOfDigits(int number) {
    int count = 0;
    while(number != 0) {
        count++;
        number /= 10;
    }
    return count;
}



