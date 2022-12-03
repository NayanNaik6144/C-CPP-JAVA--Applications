/*
Write a program which accpet number from user and count frequency of such a
digit which are less than 6 .
*/

#include<stdio.h>

int CountFreDigits(int iNum)
{
    int iDigit=0 ;
    int iCnt =0  ;
 
    if(iNum < 0)  // Updater 
    {
        iNum = - iNum ;
    }
    
    while(iNum != 0)  
    {

        iDigit = iNum % 10 ;

        if(iDigit < 6 )
        {
            iCnt++ ;
        }
        
        iNum = iNum /10 ;
    }
    
return iCnt ;

}

int main ()
{
    int iNum = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNum);

    iRet = CountFreDigits(iNum);

    printf("The Frequency of digit less than 6 in %d it are :%d\n", iNum , iRet);


    return 0;
} 

/*
Enter the number :
2395
The Frequency of digit less than 6 in 2395 it are :3


Enter the number :
1018
The Frequency of digit less than 6 in 1018 it are :3


Enter the number :
9440
The Frequency of digit less than 6 in 9440 it are :3


Enter the number :
96672
The Frequency of digit less than 6 in 96672 it are :1
*/
