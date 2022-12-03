/*
Write a program which accept range from user and Display all even numbers in between that range 
*/
#include<stdio.h>

void DisplayRange(int iStart , int iEnd)
{
    int iCnt = 0 ;
    printf("The even  range between %d to %d are \n", iStart ,iEnd);

    for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0 )
        {
            printf("%d\t",iCnt);
        }
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
The even  range between 23 to 35 are
24      26      28      30      32      34

Enter the start and end :
10
18
The even  range between 10 to 18 are
10      12      14      16      18

Enter the start and end :
-10
2
The even  range between -10 to 2 are
-10     -8      -6      -4      -2      0       2
*/