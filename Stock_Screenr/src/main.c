#include<stdio.h>
#include"Main.h"
#include"struct.h"

int main()
{
    FILE * fp=NULL;  // gest memeory allocation at some location 

    selectChoice(&fp);
    
    loadStockData(&fp);

    return 0;
}





