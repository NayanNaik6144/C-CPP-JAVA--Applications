/*
Q5) Accept N NUmbers from user and  Display all such elements which are divisible by 11
 
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibliBy11( int *Ptr , int  iLenght )
{
    int iCnt = 0;

    printf("The numbers from given array which are divisible by 11 are :\n");

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if((*(Ptr + iCnt) % 11) == 0)
        {
           printf("%d\t",(*(Ptr + iCnt)) ) ;
        }
    }
}

int main ()
{
    int *Ptr = NULL ;
    int iLenght = 0;
    register int iCnt = 0;
    int iNum= 0 ;


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

   CheckDivisibliBy11( Ptr , iLenght );

   
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
55
93
88
The elements of array are:
85      66      3       55      93      88      The numbers from given array which are divisible by 11 are :
66      55      88
*/