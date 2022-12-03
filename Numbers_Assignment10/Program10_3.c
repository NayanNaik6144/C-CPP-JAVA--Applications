/*
Write a program which accept distance from users and convert distance from killometer to meter
1km = 1000 meter
*/

#include<stdio.h>

int CovertKillToM(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 1000 ;

    return iConvert ;
}
int main ()
{
    int iValue = 0;
    int iRet = 0 ;
    printf("Enter the distance which are in killometres :\n");
    scanf("%d",&iValue);

    iRet = CovertKillToM(iValue);

    printf("The conversion of distance from %d killometers to meters is %d ", iValue , iRet);
    return 0 ;
}

/*
Enter the distance which are in killometres :
10
The conversion of distance from 10 killometers to meters is 10000

Enter the distance which are in killometres :
5
The conversion of distance from 5 killometers to meters is 5000
*/