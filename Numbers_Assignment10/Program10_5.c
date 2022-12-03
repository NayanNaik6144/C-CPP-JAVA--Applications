/*
write a program which accept area in square feet and convert it into square meter 
*/

#include<stdio.h>

double FeetTOMeter(float fValue)
{
    double dMeter=0.0 ;

    dMeter = (double)fValue * 0.0929 ;

    return dMeter ; 
}
int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter the Area in square feet :\n");
    scanf("%f", &fValue);

    dRet = FeetTOMeter(fValue);

    printf("The area in Square meter is %.7lf \n",dRet);

    return 0;
}
/*
Enter the Area in square feet :
5
The area in Square meter is 0.4645000


Enter the Area in square feet :
7
The area in Square meter is 0.6503000
*/