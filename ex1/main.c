#include <stdio.h>
#include <math.h>
#include "numClass.h"

int main() {
    int firstNumber, secondNumber;
    printf("Enter two numbers: ");
    scanf("%d,%d",&firstNumber, &secondNumber);
    if (firstNumber == secondNumber)
    {
        printf("%d",isPrime(firstNumber));
        printf("%d",isArmstrong(firstNumber));
        printf("%d",isStrong(firstNumber));
        printf("%d",isPalindrom(firstNumber));
    }
    else if (firstNumber > secondNumber) {
        //prime
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isPrime(i))
            {
                printf("%d",i);
            }
            
        }
        //armstrong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isArmstrong(i))
            {
                printf("%d",i);
            }
            
        }
        //strong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isStrong(i))
            {
                printf("%d",i);
            }
        }
        //palindrom
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isPalindrom(i))
            {
                printf("%d",i);
            }
        }
    }
    else {
        //prime
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isPrime(i))
            {
                printf("%d",i);
            }
            
        }
        //armstrong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isArmstrong(i))
            {
                printf("%d",i);
            }
            
        }
        //strong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isStrong(i))
            {
                printf("%d",i);
            }
        }
        //palindrom
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isPalindrom(i))
            {
                printf("%d",i);
            }
        }
    }
}