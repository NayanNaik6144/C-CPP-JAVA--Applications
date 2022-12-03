/*
Q4) Accept n numbers from user and accept another number and returns frequency of that Number from array 
*/
#include<stdio.h>
#include<stdlib.h>

int FrequencyOfNum(int *ptr , int iLegnth , int iNum)
{
    
    int iCnt = 0;
    int iFrequency = 0 ;
    

    for(iCnt = 0 ; iCnt < iLegnth ; iCnt++)
    {
        if( (*(ptr + iCnt))  ==  iNum )
        {
            iFrequency++ ;
        }  
        
    }

   
    return iFrequency ;
}

int main ()
{
    int *Ptr = NULL ;
    int iLenght = 0;
    int iRet= 0;
    register int iCnt = 0;
    int iNum = 0;

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

    printf("Enter the Number to Check its Frequency  in the array:\n");
    scanf("%d",&iNum );

// Step 5:- Function       

    iRet = FrequencyOfNum( Ptr , iLenght , iNum );

    printf("\nThe Frequency of %d in array are :%d\n", iNum , iRet);

    free(Ptr);

    return 0 ;
}

/*
C:\Users\Nayan\Desktop\Assignement 15> Prgram15_5exe
Enter the Legnth of Array:
6
Enter The elements in the array
85
11
3
15
11
111
The elements of array are:
85      11      3       15      11      111     Enter the Number to Check its Frequency  in the array:
12

The Frequency of 12 in array are :0

*/
