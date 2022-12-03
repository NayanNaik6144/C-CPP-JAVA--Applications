/*

*/
/*
16.2) Accept N numbers from user and aceept one another number as No , Return the index of first occurence of that No. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int CheckFirstOccThatNo(int *ptr , int iLenght , int iNo )
{

    int iCnt = 0 ;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  iNo == *( ptr + iCnt))
        {
            iCnt ;

            break;
        }
    }

   
    if(iCnt == iLenght )
    {
        return -1 ; 
    }
    else
    {
        return iCnt  ;
    }

}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;

    int iNo= 0;


    int iRet = 0 ;

    printf("Enter the Lenght of Array :\n");
    scanf("%d", &iLength);

    printf("Enetr the elements in the array :\n" );

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory") ;

        return - 1 ;
    }

    for( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The elements of array are :\n");

    for(iCnt =0 ; iCnt <iLength ; iCnt++)
    {
        printf("%d\t", ptr[iCnt]) ;
    }

    printf("Enter the number we check in that array :\n");
    scanf("%d",&iNo);


    iRet = CheckFirstOccThatNo( ptr , iLength , iNo );
     
     if( iRet == -1)
     {
        printf("The No %d is not present in that array :\n", iNo);
      }
     else
     {
        printf("The No %d is  present in that array at %d index  :\n", iNo , iRet );
     }

    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
85
11
3
15
11
111
The elements of array are :
85      11      3       15      11      111    

Enter the number we check in that array :
12
The No 12 is not present in that array :

*/