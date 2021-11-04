#include <stdio.h>
#include "NumClass.h"

int main()
{
    int firstNumber, secondNumber;
    scanf("%d%d", &firstNumber, &secondNumber);
    if (firstNumber > secondNumber)
    {
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    //armstrong
    printf("The Armstrong numbers are:");
    for (int i = firstNumber; i <= secondNumber; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    //palindrom
    printf("The Palindromes are:");
    for (int i = firstNumber; i <= secondNumber; i++)
    {
        if (isPalindrom(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    //prime
    printf("The Prime numbers are:");
    for (int i = firstNumber; i <= secondNumber; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    //strong
    printf("The Strong numbers are:");
    for (int i = firstNumber; i <= secondNumber; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}