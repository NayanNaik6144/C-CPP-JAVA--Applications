/*
Write a program which accept range from user and return addition of all even numbers in between that range 
{Range should be Positive numbers only }
*/

#include<stdio.h>
int AdditionOfEvenRange( int iStart , int iEnd)
{
    int iEvenAdd = 0 ;
    int iCnt = 0;
    
    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalide range\n");
        return 0 ;
    }

    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 ==0 )
        {
        iEvenAdd = iEvenAdd + iCnt ;
        }
    }


    return iEvenAdd ;
}
int main()
{
    int iStart = 0;
    int iEnd = 0;
    int iRet = 0;

    printf("Enter the start and end :\n");
    scanf("%d%d",&iStart ,&iEnd);

    iRet = AdditionOfEvenRange( iStart , iEnd);

    printf("The addition of Even range is %d ", iRet);

    return 0 ;
}
/*
Enter the start and end :
23
30
The addition of Even range is 108

Enter the start and end :
10
18
The addition of Even range is 70

Enter the start and end :
-10
2
Invalide range
The addition of Even range is 0
*/