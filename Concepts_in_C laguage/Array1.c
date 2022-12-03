#include<stdio.h>

int main()
{
    // All the below memory allocations are static memory allocations

    // case 1
	//First way to intialise the array
	
    int Arr[4] = {10,20,30,40};     // Member initialisation list

    //case2 
	// Second way to initialise the array
    int Brr[] = {10,20,30,40}; // Member initialisation list
	
	printf("Size of array is : %d\n",sizeof(Brr)); 

    //case 3
   //	Third way to initialise the array
    int Crr[4];
    // Member by meber initialisation
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    return 0;
}