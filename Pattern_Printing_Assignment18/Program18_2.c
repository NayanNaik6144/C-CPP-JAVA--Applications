/*
18.2) Accept n numbers from user and display below pattern 
Enter the value :
5
5       *       4       *       3       *       2       *       1       *
*/

#include<stdio.h>

void DisplayPattern(int iNum )
{
    
    int iCnt = 0 ;

    for(iCnt = iNum ; iCnt > 0 ; iCnt--)
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
C:\Users\Nayan\Desktop\Assignment 18>gcc Program18_2.c -o Program18_2exe

C:\Users\Nayan\Desktop\Assignment 18>Program18_2exe
Enter the value :
5
5       *       4       *       3       *       2       *       1       *
*/