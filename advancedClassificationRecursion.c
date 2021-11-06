#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define TRUE  1
#define FALSE  0

int isPalindrom(int numberToCheck)
{
    int number = numberToCheck;
    if(CheckPalindrome(number) == TRUE)
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int CheckPalindrome(int number)
{
    if(number == reverse(number))
    {
        return TRUE;
    }
    
    return FALSE;
}

int reverse(int number)
{
    int digit = (int)log10(number);
    if(number == 0)
        return FALSE;

    return ((number%10 * pow(10, digit)) + reverse(number/10));
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




