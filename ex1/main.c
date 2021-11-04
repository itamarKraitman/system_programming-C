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
        printf("The Armstrong numbers are:");
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d",i);
            }     
        }
         printf("\n");
        //palindrom
        printf("The Palindromes are:");
        for (int i = secondNumber; i <= firstNumber; i++)
        {  
            if (isPalindrom(i))
            {
                printf(" %d",i);
            }
        }
         printf("\n");
        //prime
        printf("The Prime numbers are:");
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isPrime(i))
            {
                printf(" %d",i);
            }
            
        }
        printf("\n");
        //strong
        printf("The Strong numbers are:");
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            if (isStrong(i))
            {
                printf(" %d",i);
            }
        }
        printf("\n");
    }
    else {
        //armstrong
        printf("The Armstrong numbers are:");
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d",i);
            }
        }
         printf("\n");
        //palindrom
        printf("The Palindromes are:");
        for (int i = firstNumber; i <= secondNumber; i++)
        {           
            if (isPalindrom(i))
            {
                printf(" %d",i);
            }
        }
         printf("\n");
        //prime
        printf("The Prime numbers are:");
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isPrime(i))
            {
                printf(" %d",i);
            }
            
        }
         printf("\n");
        //strong
        printf("The Strong numbers are:");
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            if (isStrong(i))
            {
                printf(" %d",i);
            }
        }
    }
    printf("\n");
    return 0;
}