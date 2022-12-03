/*
Write a program which accept range from user and Display all numbers in between that range 
*/
#include<stdio.h>

void DisplayRange(int iStart , int iEnd)
{
    int iCnt = 0 ;
    printf("The range between %d to %d are \n", iStart ,iEnd);

    for (iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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
The range between 23 to 35 are
23      24      25      26      27      28      29      30      31      32      33      34      35

Enter the start and end :
10
18
The range between 10 to 18 are
10      11      12      13      14      15      16      17      18

Enter the start and end :
10
10
The range between 10 to 10 are
10

Enter the start and end :
-10
2
The range between -10 to 2 are
-10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
*/