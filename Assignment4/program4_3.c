/*
* Write a program which accept number from user and display its non factors
*/

#include<stdio.h>

void NonFactors(int iNo)
{
    int iFact = 0;
    int iCnt=0;
    
    printf("The no factors of given %d number in are :\t",iNo);

    for(iCnt =1  ; iCnt<= iNo ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
           
        }
        else
        {
            printf("%d\t",iCnt);
        }
    }
}


int main ()

{
    int iValue = 0;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    NonFactors(iValue);

    return 0;
}

/*
Enter the number :
12
The no factors of given 12 number in are :      5       7       8       9       10      11

Enter the number :
13
The no factors of given 13 number in are :      2       3       4       5       6       7       8       9       10
        11      12

Enter the number :
10
The no factors of given 10 number in are :      3       4       6       7       8       9


*/