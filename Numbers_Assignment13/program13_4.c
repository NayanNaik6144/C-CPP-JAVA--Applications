/*
Write aprogram which accept number from user and return difference between 
sum even digits and sum of odd digit 
*/

#include<stdio.h>

void CountEvenDigit(int iNum)
{
    int iDigit = 0;
    int iEvenSum =0;
    int iOddSum = 0;
    int iCnt = 0;
    int iTemp = 0;
    int iDiff = 0;
     iTemp = iNum ;

     if(iNum < 0)
     {
        iNum = -iNum ;
     }

    while (iNum != 0)
    {
        iDigit = iNum % 10 ;

        if(iDigit % 2 == 0)
        {
          iEvenSum = iEvenSum + iDigit ;
        }
        else
        {
            iOddSum = iOddSum + iDigit ;
        }

        iNum =iNum / 10 ;

    }

    iDiff = iEvenSum - iOddSum ;

    printf("The difference bet sum of EvenDigit and odd digit of Given %d numer are :%d\n", iTemp ,iDiff);

}

int main()
{
    int iNum=0;
    printf("Enter the number :\n");
    scanf("%d", &iNum);

    CountEvenDigit(iNum);

    return 0;
}

/*
Enter the number :
2395
The difference bet sum of EvenDigit and odd digit of Given 2395 numer are :-15

Enter the number :
1018
The difference bet sum of EvenDigit and odd digit of Given 1018 numer are :6


Enter the number :
8440
The difference bet sum of EvenDigit and odd digit of Given 8440 numer are :16


Enter the number :
5733
The difference bet sum of EvenDigit and odd digit of Given 5733 numer are :-18
*/
