/*
Write a program which accpet number from user and
 Check whether its contain o in it or not
*/

#include<stdio.h>
#define TRUE 1 
#define FALSE 0

typedef int BOOL ;

BOOL CheckZero(int iNum)
{
    int iDigit=0 ;
    int iMult = 0;
    iMult = 1 ;

    if(iNum == 0)
    {
        return 1 ;
    }
   
     
    if(iNum < 0)  // Updater 
    {
        iNum = - iNum ;
    }
    

    while(iNum != 0)  
    {

        iDigit = iNum % 10 ;

        iMult = iMult * iDigit ;

        iNum = iNum /10 ;
    }

   // printf("The value of iMult is %d\n",iMult);

    if(iMult == 0)
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }

}

int main ()
{
    int iNum = 0;
    BOOL bRet = FALSE ;

    printf("Enter the number :\n");
    scanf("%d", &iNum);

    bRet = CheckZero(iNum);

    if(bRet == 1)
    {
        printf("it Contain Zero \n") ;
    }
    else
    {
        printf("it Contain non Zero \n") ;
    }



    return 0;
} 

/*
Enter the number :
1203
it Contain Zero


Enter the number :
1018
it Contain Zero


Enter the number :
9875
it Contain non Zero
*/