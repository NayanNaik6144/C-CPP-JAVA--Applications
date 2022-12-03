/*
Q3) Accept N Numbers from user and check whether that numbers  contain 11 in it or not 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check( int *ptr , int iLenght)
{
    int iCnt =0;
    int iFrequency = 0;

     for (iCnt = 0 ; iCnt < iLenght ; iCnt++)
     {
        if((*(ptr + iCnt)) == 11)
        {
            iFrequency++ ;

            break;
        }
     }

    if(iCnt == iLenght)
    {
        return false;
    }
    else 
    {
        return true ;
    }

}


int main ()
{
    int *Ptr = NULL ;
    int iLenght = 0;
    bool bRet= false;
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

    bRet = Check( Ptr , iLenght);

    if(bRet == true)
    {
        printf("11 is present :\n") ;
    }
    else
    {
        printf("11 is not present :\n");
    }

    

    free(Ptr);

    return 0 ;
}

/*
C:\Users\Nayan\Desktop\Assignement 15>gcc Program15_3.c -o Prgram15_3exe

C:\Users\Nayan\Desktop\Assignement 15> Prgram15_3exe
Enter the Legnth of Array:
6
Enter The elements in the array
85
66
11
80
93
88
The elements of array are:
85      66      11      80      93      88     
 11 is present :

 C:\Users\Nayan\Desktop\Assignement 15> Prgram15_3exe
Enter the Legnth of Array:
6
Enter The elements in the array
85
66
33
80
93
88
The elements of array are:
85      66      33      80      93      88      11 is not present :

*/