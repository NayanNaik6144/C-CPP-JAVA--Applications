/*
write a program which accept string from user and count teh number of white space 
*/
#include<stdio.h>

int Findlenght(char *Brr)
{
     int istrlenX=0 ;
      while(*Brr != '\0')
    {
        istrlenX++ ;
        Brr++ ;
    }

    return istrlenX ;
}



int  CountwhiteSpace(char *Arr)
{
    int iRet= 0 ;

    iRet=Findlenght(Arr) ;

    int i = 0 ;
    int iCount =0;
    for( i=0 ; i<= iRet ; i++)
    {
        if( Arr[i] == ' ')
        {
            
            iCount++;
        }
        
    }

    return iCount++ ;

}

int main()
{
    char Arr[50] = "\0";
    int iRet= 0 ;

    printf("Enetr the string :\n");
    scanf("%[^'\n']s", Arr);
    
    iRet = CountwhiteSpace(Arr);
    printf("\n\nThe %s string conatins total %d white space  in it \n",Arr ,iRet );


    return 0 ;
} 


/*
C:\Users\Nayan\Desktop\String>gcc program26_5.c -o Program26_5exe

C:\Users\Nayan\Desktop\String> Program26_5exe
Enetr the string :
Marvellous Infosystem by piyush Manhoar khainar


The Marvellous Infosystem by piyush Manhoar khainar string conatins total 5 white space  in it


Enetr the string :
MArvellous


The MArvellous string conatins total 0 white space  in it

C:\Users\Nayan\Desktop\String>Marvellous infosystem pune
'Marvellous' is not recognized as an internal or external command,
operable program or batch file.

C:\Users\Nayan\Desktop\String> Program26_5exe
Enetr the string :
nayan naik


The nayan naik  string conatins total 2 white space  in it


*/