/*
16.5) Accept N numbers from user and return product of all odd elements 
*/



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int ProductOfOddElements(int *ptr , int iLenght )
{

    int iCnt = 0 ;
    int iCount = 0;
    int iMult = 0;
    iMult = 1 ;
   
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        
        if(   *( ptr + iCnt) % 2 != 0)
        {
           iMult = iMult *   (*( ptr + iCnt)) ;
        }
        else
        {
            iMult = 0 ;
        }
    }

   
    return iMult ;

}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;

    

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

   
    iRet = ProductOfOddElements( ptr , iLength  );
     
     
     printf("The product of odd elements  present in that array is :%d\n", iRet);
      
    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
88
10
20
70
72
80
The elements of array are :
88      10      20      70      72      80      The product of odd elements  present in that array is :0

Enter the Lenght of Array :
6
Enetr the elements in the array :
15
66
3
70
10
88
The elements of array are :
15      66      3       70      10      88      The product of odd elements  present in that array is :45
*/