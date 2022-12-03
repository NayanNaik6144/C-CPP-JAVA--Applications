/*
Write a program which accept radius of circles from user and calculate its area 
consider value of PI is 3.14 
*/

#include<stdio.h>

double  CircleArea(float fNo)
{
    double dArea = 0;
    float fPI = 3.14 ;
     
    dArea = (double) fPI * fNo * fNo ;

    return dArea ;
}
int main ()
{
    float fValue = 0;
    double dRet=0;
    printf("Enter the number :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The area of circle is : %.4lf", dRet);

    return 0 ;
}
/*
Enter the number :
5.3
The area of circle is : 88.2026

Enter the number :
10.4
The area of circle is : 339.6224
*/