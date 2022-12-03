/*
Write a program which accpet number from user and display its digits in reverse order
*/

#include<stdio.h>

void ReverseOfDigits(int iNum)
{
    int iDigit=0 ;
    int iRev =0  ;
    int iTemp = 0;
    
    iTemp = iNum ;

    
    if(iNum < 0)  // Updater 
    {
        iNum = - iNum ;
    }
    
    while(iNum != 0)  
    {

        iDigit = iNum % 10 ;

        iRev = iRev*10 + iDigit ;
        
        iNum = iNum /10 ;
    }
    
  printf("The reverse of %d given number is :%d\n",iTemp , iRev);

}

int main ()
{
    int iNum = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNum);

    ReverseOfDigits(iNum);

    return 0;
} 

/*
Enter the number :
2395
The reverse of 2395 given number is :5932


Enter the number :
1018
The reverse of 1018 given number is :8101

Enter the number :
-1018
The reverse of -1018 given number is :8101
*/