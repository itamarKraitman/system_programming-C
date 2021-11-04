#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define TRUE 1
#define FALSE 0

//checking if a number is palindrom
int isPalindrom(int numberToCheck) {
    int reversedNumber = 1, number = numberToCheck;
    while (number != 0) {
        int remained = number % 10;
        reversedNumber *= 10 + remained;
        number /= 10;
    }
    if(reversedNumber == numberToCheck) {
        return TRUE;
    }
    return FALSE;
}

//checking if a number is armstrong number
int isArmstrong(int numberToCheck) {
    int numberOfDigits = numOfDigits(numberToCheck);
    int sum = 0;
    int number = numberToCheck;
    int currentDigit;
    while(number != 0) {
        currentDigit = number % 10;
        sum += pow(currentDigit, numberOfDigits);
        if(sum > number) {
            return FALSE;
        }
    }
    if(sum == numberToCheck) {
        return TRUE;
    }
    else {
        return FALSE;
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
