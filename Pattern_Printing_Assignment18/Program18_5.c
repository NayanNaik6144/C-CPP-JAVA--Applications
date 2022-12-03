/*
18.5) Accept n numbers from user and display below pattern 

Enter the value :
8
2       4       6       8       10      12      14      16

*/

#include<stdio.h>

void DisplayPattern(int iNum )
{
    
    int iCnt = 0 ;

    for(iCnt = 2 ; iCnt<= iNum*2  ; iCnt = iCnt + 2 )
    {
        printf("%d\t",iCnt);
      
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
C:\Users\Nayan\Desktop\Assignment 18>Program18_5exe
Enter the value :
8
2       4       6       8       10      12      14      16
*/