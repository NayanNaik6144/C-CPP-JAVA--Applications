/*
18.3) Accept n numbers from user and display below pattern 

5
1       *       2       *       3       *       4       *       5       *

*/

#include<stdio.h>

void DisplayPattern(int iNum )
{
    
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt<= iNum ; iCnt++)
    {
        printf("%d\t*\t",iCnt);
      
    }
                
}
int main()
{
    int iNum=0;
    
    printf("Enter the value :\n");
    scanf("%d", &iNum);

    DisplayPattern(iNum);

    return 0 ;
}

/*
C:\Users\Nayan\Desktop\Assignment 18>Program18_3exe
Enter the value :
5
1       *       2       *       3       *       4       *       5       *
*/