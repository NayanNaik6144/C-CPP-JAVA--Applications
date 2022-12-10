#pragma once 
#include<stdlib.h>
#include"struct.h"

extern void selectChoice(FILE** fptr);
extern void loadStockData(FILE** fptr);
extern void showReco(struct NODE *head);