/*
* Write a program which accept number from user and display its factors in decreasing orders 
*/

#include<stdio.h>

void FactorsRev(int iNo)
{
    int iFact = 0;
    int iCnt=0;
    
    printf("The factors of given %d number in decreasing order are :\t",iNo);

    for(iCnt =iNo / 2 ; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt ==0)
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

    FactorsRev(iValue);

    return 0;
}

/*
Enter the number :
12
The factors of given 12 number in decreasing order are :        6       4       3       2       1

Enter the number :
13

The factors of given 13 number in decreasing order are :        1

Enter the number :
10
The factors of given 10 number in decreasing order are :        5       2       1

*/