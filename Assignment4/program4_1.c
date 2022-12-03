 /*
 * Write a program which accept number from user and display its multiplication of factors

*/

#include<stdio.h>

int MultFactors(int iNo)
{
    int iMultfact = 0;
    int iCnt=0;
    iMultfact =1 ;

    for(iCnt = 1 ; iCnt <= iNo /2 ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iMultfact = iMultfact *iCnt ;
        }
    }
    return iMultfact;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet=MultFactors(iValue);

    printf("the Multiplication of all factors of given %d number is :->%d", iValue ,iRet);


    return 0;
}

/*
Input ->
Enter the number :
12

OutPut ->

the Multiplication of all factors of given 12 number is :->144

Input ->
Enter the number :
13

Output ->
0
the Multiplication of all factors of given 13 number is :->1

Input ->
Enter the number :
10

OutPut ->
the Multiplication of all factors of given 10 number is :->10

*/