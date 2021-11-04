#include <stdio.h>
#include "numClass.h"

int main() {
    int firstNumber, secondNumber;
    scanf("%d%d",&firstNumber, &secondNumber);
    if (firstNumber == secondNumber)
    {
        printf("%d",isPrime(firstNumber));
        printf("%d",isArmstrong(firstNumber));
        printf("%d",isStrong(firstNumber));
        printf("%d",isPalindrom(firstNumber));
    }
    else if (firstNumber > secondNumber) {
        //armstrong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Armstrong numbers are:");
            if (isArmstrong(i))
            {
                printf("%d",i);
            }
            
        }
        //palindrom
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Palindromes are:");
            if (isPalindrom(i))
            {
                printf("%d",i);
            }
        }
        //prime
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Prime numbers are:");
            if (isPrime(i))
            {
                printf("%d",i);
            }
            
        }
        //strong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Strong numbers are:");
            if (isStrong(i))
            {
                printf("%d",i);
            }
        }
    }
    else {
        //armstrong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Armstrong numbers are:");
            if (isArmstrong(i))
            {
                printf("%d",i);
            }
        }
        //palindrom
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Palindromes are:");
            if (isPalindrom(i))
            {
                printf("%d",i);
            }
        }
        //prime
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Prime numbers are:");
            if (isPrime(i))
            {
                printf("%d",i);
            }
            
        }
        
        //strong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Strong numbers are:");
            if (isStrong(i))
            {
                printf("%d",i);
            }
        }
        
    }
}