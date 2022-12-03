/*
Write a program which accept range from user and Display all numbers in between that range in reverse order 
*/
#include<stdio.h>

void DisplayRange(int iStart , int iEnd)
{
    int iCnt = 0 ;
    printf("The range between %d to %d in reverse order is  \n", iStart ,iEnd);

    for (iCnt =iEnd ; iCnt >= iStart ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iStart = 0;
    int iEnd = 0;

    printf("Enter the start and end :\n");
    scanf("%d%d",&iStart ,&iEnd);

    DisplayRange(iStart , iEnd );

    return 0 ;
}
/*
Enter the start and end :
23
35
The range between 23 to 35 in reverse order is
35      34      33      32      31      30      29      28      27      26      25      24      23

Enter the start and end :
10
18
The range between 10 to 18 in reverse order is
18      17      16      15      14      13      12      11      10

Enter the start and end :
10
10
The range between 10 to 10 in reverse order is
10

Enter the start and end :
-10
2
The range between -10 to 2 in reverse order is
2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10
*/