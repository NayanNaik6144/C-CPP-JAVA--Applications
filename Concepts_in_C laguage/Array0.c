#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};  // Arr is one dimentional array which contents 5 element of integer type  

    printf("Base address of array : %p\n",Arr);     // Arr contain base address of first element //100
	
    printf("Base address of array : %p\n",&Arr);     // 100
	
    printf("Size of array is : %d\n",sizeof(Arr));  // 20 bytes  
	
	printf("Base address of array : %p\n",Arr+1);     // 104  (100 +1*4)
	
    printf("Base address of array : %p\n",&Arr+1);     // 120 (100+1*20) shift whole array by 20 bytes 
	
	// printf("Base address of array : %p\n",Arr[]);   // Cuase error  it is not 
	
	printf("value of element in array  : %d\n",Arr[0]);  //10
	
	printf(" value of element in array: %d\n",Arr[1]);   //20
	
	printf(" value of element in array: %d\n",Arr[2]);  //30
	
	printf("value of element in array : %d\n",Arr[3]);  //40
	
	printf(" value of element in array: %d\n",Arr[4]);  //50
	
	
    
    return 0;
}