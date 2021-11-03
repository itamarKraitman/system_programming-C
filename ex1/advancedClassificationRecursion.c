#include <stdio.h>
#include <math.h>
#define TRUE  1
#define FALSE  0

int isPalindrom(int numberToCheck) {
    int number = numberToCheck;
    int digits = numOfDigits(number);
    if(number < 10) {
        return TRUE;
    }
    else if(digits == 2 ) {
        if(number % 10 == number / 10) {
            return TRUE;
        }
        else {
            return FALSE;
        }
    }
    else if(number / (int) pow(10,digits - 1) != number % 10) {
        return FALSE;
    }
    else {
        int toReduce = number - (number / (int) pow(10,digits - 1)); 
        int newNumberToCheck = toReduce % 10;
        isPalindrom(newNumberToCheck);
    }
}

int isArmstrong(int numberToCheck) {
    int number = numberToCheck;
    int numberOfDigits = numOfDigits(number);
    if(checkArmstrong(number, numberOfDigits) == numberToCheck) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int checkArmstrong(int number, int numberOfDigits) {
    if (number <= 0) 
    {
        return 0;
    }
    return pow(number % 10, numberOfDigits) + checkArmstrong(number / 10, numberOfDigits);
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




