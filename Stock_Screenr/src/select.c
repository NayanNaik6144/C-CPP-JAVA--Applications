#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
#include"struct.h"

void selectChoice(FILE** fptr)
{
	while(1)
	{
		system("cls");  // linux asel tar clear ani window asel tar cls
		fflush(stdin);
		int choice;

		printf("\nList of stocks\n\n1.ADANIENT\n2.ASIANPAINT\n3.CAP\n4.PNB\n5.TATAMOTORS\n6.ZOMATO\n7.Exist\n\n");
		printf("select your choice \n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nADANIENT\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\ADANIENT.NS.csv", "r");
			        return;
			case 2:
				printf("\nASIANPAINT\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\ASIANPAINT.NS.csv", "r");
				return;
			case 3:
				printf("\nCAP\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\CAP.PA.csv", "r");
				return;
			case 4:
				printf("\nPNB\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\PNB.NS.csv", "r");
				return;
			case 5:
				printf("\nTATAMOTORS\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\TATAMOTORS.NS.csv", "r");
				return;
			case 6:
				printf("\nZOMATO\n\n");
				*fptr = fopen("C:\\Users\\Nayan\\Desktop\\Pune\\src\\ZOMATO.NS.csv", "r");
				return;
			case 7:
				exit(0);
			default:
				printf("Invalid Selection");
				break;
		}
	}
}
