/*
Q1) Accept N NUmbers from user and
 return difference between summation of even elements and summation of odd elelments 
*/

#include<stdio.h>
#include<stdlib.h>

int SummationOfEvenOffNum(int *ptr , int iLegnth)
{
    int iSumDiff = 0;
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0 ; iCnt < iLegnth ; iCnt++)
    {
        if( (*(ptr + iCnt) % 2) == 0)
        {
            iEvenSum = iEvenSum + (*(ptr + iCnt));
        }
        else
        {
            iOddSum = iOddSum +  (*(ptr + iCnt)) ;
        }
    }

   // printf("The evensum is : %d\n", iEvenSum);
   // printf("The Oddsum is : %d\n", iOddSum);

    iSumDiff = iEvenSum - iOddSum ;

    return iSumDiff ;
}

int main ()
{
    int *Ptr = NULL ;
    int iLenght = 0;
    int iRet= 0;
    register int iCnt = 0;

// Step 1:-

    printf("Enter the Legnth of Array:\n");
    scanf("%d",&iLenght);

// Step 2:-
    Ptr = (int *)malloc( iLenght * sizeof(int) );
    
// Step 3:-
    printf("Enter The elements in the array ") ;
    
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]) ;
    }

 // Step 4:-

    printf("The elements of array are:\n");
    for(iCnt=0 ; iCnt < iLenght ;iCnt++)
    {
        printf("%d\t", Ptr[iCnt]);
    }

// Step 5:- Function

    iRet = SummationOfEvenOffNum( Ptr , iLenght);

    printf("\nThe  difference between summation of even elements and summation of odd elelments is :%d\n", iRet);

    free(Ptr);

    return 0 ;
}

/*
Enter the Legnth of Array:
6
Enter The elements in the array
85
66
3
80
93
88
The elements of array are:
85      66      3       80      93      88      The evensum is : 234
The Oddsum is : 181

The  difference between summation of even elements and summation of odd elelments is :53
*/