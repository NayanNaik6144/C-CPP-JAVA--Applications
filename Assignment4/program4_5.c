/*
* Write a program which accept number from user and return difference between summation of all its  factors and non factors .
*/

#include<stdio.h>

int DifBetFactsOfNonFacts(int iNo)
{

    int iCnt=0;
    int iSumOfNonFact = 0;
    int iSumOfFact=0;
    int iDiff=0;

    for(iCnt =1  ; iCnt< iNo ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
          iSumOfFact =iSumOfFact + iCnt ;
        }
        else
        {
            iSumOfNonFact = iSumOfNonFact + iCnt ;
        }
    }

    iDiff = iSumOfFact - iSumOfNonFact ;

    return iDiff ;
}


int main ()

{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet= DifBetFactsOfNonFacts(iValue);

    printf("The difference between  Sumation of factors and non factors of %d given number is :->%d\t",iValue ,iRet);

    return 0;
}

/*
Enter the number :
12
The difference between  Sumation of factors and non factors of 12 given number is :->-34

Enter the number :
13
The difference between  Sumation of factors and non factors of 13 given number is :->-76

Enter the number :
10
The difference between  Sumation of factors and non factors of 10 given number is :->-29
*/