#include <stdio.h>
#include <math.h>

//checking if a number is palindrom
int isPalindrom(int numberToCheck) {
    int reversedNumber = 1, number = numberToCheck;
    while (number != 0) {
        int remained = number % 10;
        reversedNumber *= 10 + remained;
        number /= 10;
    }
    if(reversedNumber == numberToCheck) {
        return 1;
    }
    return 0;
}

//checking if a number id armstrong numbet
int isArmstrong(int numberToCheck) {
    int numberOfDigits = numOfDigits(numberToCheck);
    int sum = 0;
    int number = numberToCheck;
    int currentDigit;
    while(number != 0) {
        currentDigit = number % 10;
        sum += pow(currentDigit, numberOfDigits);
    }
    if(sum == numberToCheck) {
        return 1;
    }
    else {
        return 0;
    }
}

//compute number of digits in muber
int numberToCheck(int number) {
    int count = 0;
    while(number != 0) {
        count++;
        number /= 10;
    }
    return count;
}
