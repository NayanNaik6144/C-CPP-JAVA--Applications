// Data type qualifiers there are two types of qualifiers 
// const and voliatle

#include<stdio.h>

void fun()
{
	int no2=0;   // This no2 is not same as of int main no2 bcz both have different scope and life 
	
	no2+=2;
	
	printf("the value of no is :%d",no2);
	
}

int main()
{
    int no1 = 10;
    const int no2 = 10;    // if we put const before varibale then there value we cant change in there scope 

    printf("%d\n",no1);
    printf("%d\n",no2);

    no1++;         // A
   // no2++;          // NA
    
    no1 = 20;       // A
    //no2 = 20;       // NA

    no1--;          // A
   // no2--;          // NA
	
	fun ();

    return 0;
}