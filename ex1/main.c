#include <stdio.h>
#include "numClass.h"

int main() {
    int firstNumber, secondNumber;
    scanf("%d%d",&firstNumber, &secondNumber);
    //if (firstNumber == secondNumber)
    //{
      //  printf("%d ",isPrime(firstNumber));
        //printf("%d ",isArmstrong(firstNumber));
        //printf("%d ",isStrong(firstNumber));
        //printf("%d ",isPalindrom(firstNumber));
    //}
    if (firstNumber > secondNumber) {
        //armstrong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Armstrong numbers are: ");
            if (isArmstrong(i))
            {
                printf("%d ",i);
            }     
        }
         printf("\n");
        //palindrom
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Palindromes are: ");
            if (isPalindrom(i))
            {
                printf("%d ",i);
            }
        }
         printf("\n");
        //prime
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Prime numbers are: ");
            if (isPrime(i))
            {
                printf("%d ",i);
            }
            
        }
        printf("\n");
        //strong
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("The Strong numbers are: ");
            if (isStrong(i))
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    else {
        //armstrong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Armstrong numbers are: \n");
            if (isArmstrong(i))
            {
                printf("%d ",i);
            }
        }
         printf("\n");
        //palindrom
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Palindromes are: \n");
            if (isPalindrom(i))
            {
                printf("%d ",i);
            }
        }
         printf("\n");
        //prime
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Prime numbers are: \n");
            if (isPrime(i))
            {
                printf("%d ",i);
            }
            
        }
         printf("\n");
        //strong
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("The Strong numbers are: \n");
            if (isStrong(i))
            {
                printf("%d ",i);
            }
        }
         printf("\n");
    }
}