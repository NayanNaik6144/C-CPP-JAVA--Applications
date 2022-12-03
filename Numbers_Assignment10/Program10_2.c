/*
Write a program which accept number from users and calculat the area of rectangle 
*/

#include<stdio.h>

double CalculateArea(float fWidth , float fHeight)
{
    double dArea = 0;
     
    dArea = fWidth * fHeight ;

    return dArea ;
}
int main()
{
    float fWidth = 0;
    float fHeight = 0 ;
    double dArea = 0 ;

    printf("Enter the width :\n");
    scanf("%f",&fWidth);

    printf("Enter the Height  :\n");
    scanf("%f",&fHeight);

    dArea = CalculateArea(fWidth , fHeight);

    printf("the Area of rectangle is : %.4lf\n",dArea);
    
    return 0 ;
}

/*
Enter the width :
5.3
Enter the Height  :
9.78
the Area of rectangle is : 51.8340
*/