/*
write a program which accept temperature in fahrenheit and convert it into celsius 
*/

#include<stdio.h>

double FhToCelsius(float fValue) 
{
    double dCelsius = 0.0 ;

    dCelsius = (double)(fValue - 32.00) * (5.00/9.00) ;

    return dCelsius ;

}
int main ()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("enter the temp in fahrenheit:\n");
    scanf("%f",&fValue);

    dRet = FhToCelsius(fValue) ;

    printf("The conversion of fahrenheit %f f in to celsius is %.4lf",fValue , dRet);

    return 0 ;
}
/*
enter the temp in fahrenheit:
10.0
The conversion of fahrenheit 10.000000 f in to celsius is -12.2222

enter the temp in fahrenheit:
34
The conversion of fahrenheit 34.000000 f in to celsius is 1.1111
*/