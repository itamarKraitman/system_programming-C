#include <stdio.h>
#define TRUE = 1, FALSE = 0
//does not work!!

int isPalindrom(int numberToCheck) {
    int number = numberToCheck;
    if(number < 10) {
        return TRUE;
    }
    else if(numOfDigits(number) == 2 ) {
        if(number % 10 == number / 10) {
            return TRUE;
        }
        else {
            return FALSE;
        }
    }
    else if((number % pow(10,numOfDigits) != number % 10) {
        return FALSE;
    }
    else {
        int toReduce = number - (number % pow(10,numOfDigits)); 
        int newNumberToCheck = toReduce % 10;
        isPalindrom(newNumerToCheck);
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