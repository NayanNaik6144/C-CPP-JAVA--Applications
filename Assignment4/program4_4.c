/*
* Write a program which accept number from user and return summation of its non factors. 
*/

#include<stdio.h>

int SumOfNonFactors(int iNo)
{

    int iCnt=0;
    int iSum = 0;

    for(iCnt =1  ; iCnt<= iNo ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
           
        }
        else
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum ;
}


int main ()

{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet= SumOfNonFactors(iValue);

    printf("The Sumation of non factors of %d given number is :->%d\t",iValue ,iRet);

    return 0;
}

/*
Enter the number :
12
The Sumation of non factors of 12 given number is :->50

Enter the number :
10
The Sumation of non factors of 10 given number is :->37
0

Enter the number :
13
The Sumation of non factors of 13 given number is :->77

*/