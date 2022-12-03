/*
Write aprogram which accept number from user and return the count of odd digits
*/

#include<stdio.h>

void CountOddDigit(int iNum)
{
    int iDigit = 0;
    int iCnt = 0;
    int iTemp = 0;
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
           
        }
        else
        {
            iCnt++ ;
        }

        iNum =iNum / 10 ;

    }

    printf("The EvenDigit in Given %d numer are :%d\n", iTemp ,iCnt);

}

int main()
{
    int iNum=0;
    printf("Enter the number :\n");
    scanf("%d", &iNum);

    CountOddDigit(iNum);

    return 0;
}

/*
Enter the number :
2395
The EvenDigit in Given 2395 numer are :3

Enter the number :
1018
The EvenDigit in Given 1018 numer are :2

Enter the number :
-1018
The EvenDigit in Given -1018 numer are :2

Enter the number :
8642
The EvenDigit in Given 8642 numer are :0
*/