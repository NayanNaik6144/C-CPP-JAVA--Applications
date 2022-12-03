/*
18.1) Accept n numbers from user and display below pattern 
*/

#include<stdio.h>

void DisplayPattern(int iNum )
{
    char cCnt ;
    cCnt = 'A';
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <=iNum ; iCnt++)
    {
        printf("%c\t",cCnt);
        cCnt++;
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
C:\Users\Nayan\Desktop\Assignment 18>gcc Program18_1.c -o Program18exe

C:\Users\Nayan\Desktop\Assignment 18>Program18exe
Enter the value :
5
A       B       C       D       E
*/