/*
Q4) Accept n numbers from user and returns frequency of 11 from array 
*/
#include<stdio.h>
#include<stdlib.h>

int FrequencyOf11(int *ptr , int iLegnth)
{
    
    int iCnt = 0;
    int iFrequency = 0 ;
    

    for(iCnt = 0 ; iCnt < iLegnth ; iCnt++)
    {
        if( (*(ptr + iCnt))  ==  11 )
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

    iRet = FrequencyOf11( Ptr , iLenght);

    printf("\nThe Frequency of 11 in array is :%d\n", iRet);

    free(Ptr);

    return 0 ;
}

/*
C:\Users\Nayan\Desktop\Assignement 15>gcc Program15_4.c -o Prgram15_4exe

C:\Users\Nayan\Desktop\Assignement 15> Prgram15_4exe
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
85      66      3       80      93      88
The Frequency of 11 in array is :0

C:\Users\Nayan\Desktop\Assignement 15> Prgram15_4exe
Enter the Legnth of Array:
6
Enter The elements in the array
85
11
3
80
93
88
The elements of array are:
85      11      3       80      93      88
The Frequency of 11 in array is :1
*/                                                         