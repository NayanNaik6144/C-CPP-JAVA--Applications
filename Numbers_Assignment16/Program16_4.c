/*
16.4) Accept n numbers from user and accept range , display all elements from that range
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



void  DisplayRange(int *ptr , int iLenght , int iStart , int iEnd  )
{

    int iCnt = 0 ;
    int iCount = 0;
    
    printf("All elments from %d to %d are :\n ", iStart , iEnd);

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  iStart < *( ptr + iCnt) && *( ptr + iCnt) < iEnd)
        {
            printf("%d\t", *( ptr + iCnt));
        }
        
    }

   
    
}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;

    int iStart = 0;
    int iEnd = 0 ;
    
    printf("Enter the Lenght of Array :\n");
    scanf("%d", &iLength);

    printf("Enetr the elements in the array :\n" );

    ptr = (int *)malloc(iLength * sizeof(int));

    for( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The elements of array are :\n");

    for(iCnt =0 ; iCnt <iLength ; iCnt++)
    {
        printf("%d\t", ptr[iCnt]) ;
    }

    printf("Enter the start and end range which dispaly from array  :\n");
    scanf("%d %d",&iStart,&iEnd);


     DisplayRange( ptr , iLength , iStart , iEnd );
     
    

    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
85
66
3
76
930
88
The elements of array are :
85      66      3       76      93      88      Enter the start and end range which dispaly from array  :
60
90
All elments from 60 to 90 are :
 85     66      76      88

Enter the Lenght of Array :
6
Enetr the elements in the array :
88
66
3
76
93
88
The elements of array are :
88      66      3       76      93      88      Enter the start and end range which dispaly from array  :
30
50
All elments from 30 to 50 are :

*/