/*
Write aprogram which accept number from user and return the multiplications of all digits
*/

#include<stdio.h>

void CountEvenDigit(int iNum)
{
    int iDigit = 0;
    int iMult = 0;
    int iTemp = 0;
     iTemp = iNum ;
     iMult = 1 ;

     if(iNum < 0)
     {
        iNum = -iNum ;
     }

    while (iNum != 0)
    {
        iDigit = iNum % 10 ;

        iMult = iMult* iDigit ;

        iNum =iNum / 10 ;

    }

    printf("The EvenDigit in Given %d numer are :%d\n", iTemp ,iMult);

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
The EvenDigit in Given 2395 numer are :270

C:\Users\Nayan\Desktop\Assignment 13> program13_5exe
Enter the number :
1018
The EvenDigit in Given 1018 numer are :0

C:\Users\Nayan\Desktop\Assignment 13> program13_5exe
Enter the number :
9922
The EvenDigit in Given 9922 numer are :324

*/