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
