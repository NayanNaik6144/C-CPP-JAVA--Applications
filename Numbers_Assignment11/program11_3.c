/*
Write a program which accept range from user and return addition of all numbers in between that range 
{Range should be Positive numbers only }
*/

#include<stdio.h>
int AdditionOfRange( int iStart , int iEnd)
{
    int iAdd = 0 ;
    int iCnt = 0;
    
    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalide range\n");
        return 0 ;
    }

    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        iAdd = iAdd + iCnt ;
    }


    return iAdd ;
}
int main()
{
    int iStart = 0;
    int iEnd = 0;
    int iRet = 0;

    printf("Enter the start and end :\n");
    scanf("%d%d",&iStart ,&iEnd);

    iRet = AdditionOfRange( iStart , iEnd);

    printf("The addition of range is %d ", iRet);

    return 0 ;
}
/*
Enter the start and end :
23
30
The addition of range is 212

Enter the start and end :
10
18
The addition of range is 126

Enter the start and end :
-10
2
Invalide rangeThe addition of range is 0

Enter the start and end :
-10
2
Invalide range
The addition of range is 0
*/