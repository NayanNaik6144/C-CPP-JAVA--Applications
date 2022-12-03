/*
Write aprogram which accept number from user and return the count of  digits between 3 and 7
*/

#include<stdio.h>

void CountEvenDigit(int iNum)
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

        if( iDigit > 3 && iDigit < 7)
        {
           iCnt ++ ;
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

    CountEvenDigit(iNum);

    return 0;
}

/*
Enter the number :
2395
The EvenDigit in Given 2395 numer are :1


Enter the number :
1018
The EvenDigit in Given 1018 numer are :0

Enter the number :
-1018
The EvenDigit in Given -1018 numer are :0

Enter the number :
9922
The EvenDigit in Given 9922 numer are :0
*/