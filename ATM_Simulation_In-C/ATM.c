/*
How ATM Machine worked prgramatically 
make atm machine by using c language

*/

#include<stdio.h>
#include<stdlib.h>

static int iPIN=6144 ;
static int Cash= 150000 ;
static int SCash= 150000 ;
int ipin=0;
static int Deposite=0 ;
static int Withdraw=0;
static  int iCashD=0;
static int iCashW=0;


void CFBalance()
{
     printf("\n***********************************************\n");
            printf("\nYou Entered Successfully in Your Account\n");
            printf("\n 'Mr Nayan Suresh Naik Welcome to the SBI '\n");
            printf("\n Your Total Balance is :%d\n\n",Cash);
            
     printf("\n***********************************************\n");

}
   

void Check_Balance()
{
    int iChance=3;
    for(int iCnt=1 ; iCnt <=3 ; iCnt++)
    {
        printf("\n You have only %d Chance to enetr in your Bank account \n",iChance);
        iChance = iChance-1 ;
        printf("\nPlease Enter Your Valide PIN:\t");
        scanf("%d",&ipin);
        if(iPIN == ipin)
        {
            CFBalance();
            return ;

        }
        else
        {
            printf("\nSorry you enter Invalide pin:\n");
            printf("\nYou lost Your %d chance \n",iCnt);
        }

    }
            printf("\nWait for some time , Try again latter\n");
            printf("\nSorry for the inconvienece service\n");
            return ;


}
 void CFCheck_MINI_statement()
 {
    printf("\n********************************************************************\n");
    printf("\nYour Main Balance Before Performing Any Operations is :-%d\n",SCash);
    printf("\nYour Update Balance after  depositing is              :-%d\n",Deposite);
    printf("\nYour deposit amount                                   :-%d\n",iCashD);
    printf("\nYour remaining balance after Withdrawl is             :-%d\n",Withdraw);
    printf("\nYour withdrawal amount  is                            :-%d\n",iCashW);
    
    
    printf("\n********************************************************************\n");
    
 }


void Check_MINI_statement()
{
    int iChance=3;
    for(int iCnt=1 ; iCnt <=3 ; iCnt++)
    {
        printf("\n You have only %d Chance to enetr in your Bank account \n",iChance);
        iChance = iChance-1 ;
        printf("\nPlease Enter Your Valide PIN:\t");
        scanf("%d",&ipin);
        if(iPIN == ipin)
        {
            CFCheck_MINI_statement();
             return ;

        }
        else
        {
            printf("\nSorry you enter Invalide pin:\n");
            printf("\nYou lost Your %d chance \n",iCnt);
        }

    }
            printf("\nWait for some time , Try again latter\n");
            printf("\nSorry for the inconvienece service\n");
            return ;



}
void UpdateACCount(int iCash)
{
    Cash = Cash - iCash;
    Withdraw= Cash ;
} 

 void CFWithdraw_Money()
 {
    printf("\n********************************************************************\n");
    int iCash=0;
    printf("\nEnter money which You want to be Withdraw:->\t ");
    scanf("%d",&iCash);
    UpdateACCount(iCash);
    iCashW =iCash ;
    printf("\nYour Remaining balance is %d\n",Cash);
    printf("\n********************************************************************\n");
}
void Withdraw_Money()
{
    int iChance=3;
    for(int iCnt=1 ; iCnt <=3 ; iCnt++)
    {
        printf("\n You have only %d Chance to enetr in your Bank account \n",iChance);
        iChance = iChance-1 ;
        printf("\nPlease Enter Your Valide PIN:\t");
        scanf("%d",&ipin);
        if(iPIN == ipin)
        {
            CFBalance();
            CFWithdraw_Money();

            return ;

        }
        else
        {
            printf("\nSorry you enter Invalide pin:\n");
            printf("\nYou lost Your %d chance \n",iCnt);
        }

    }
            printf("\nWait for some time , Try again latter\n");
            printf("\nSorry for the inconvienece service\n");
            return ;



}
 void CFChange_PIN()
{
    int iPin = 0;
    printf("\n Enter your Old Pin number\n");
    scanf("%d",&iPin);

    printf("\n***********************************************\n");

    printf("\n Enter New  Pin number which you want\n");
    scanf("%d",&iPin);

    iPIN =iPin ;
    printf("\n***********************************************\n");

    printf("\nYou Successfully gerenarted your new Pin\n");

}
void Change_PIN()
{
    int iChance=3;
    for(int iCnt=1 ; iCnt <=3 ; iCnt++)
    {
        printf("\n You have only %d Chance to enetr in your Bank account \n",iChance);
        iChance = iChance-1 ;
        printf("\nPlease Enter Your Valide PIN:\t");
        scanf("%d",&ipin);
        if(iPIN == ipin)
        {
            CFChange_PIN();
            return ;

        }
        else
        {
            printf("\nSorry you enter Invalide pin:\n");
            printf("\nYou lost Your %d chance \n",iCnt);
        }

    }
            printf("\nWait for some time , Try again latter\n");
            printf("\nSorry for the inconvienece service\n");
            return ;



}

void UpdateACCountX(int iCash)
{
    Cash = Cash + iCash;
    Deposite= Cash ;
} 


void CFCash_Deposite()
{
    printf("\n********************************************************************\n");
    int iCash=0;
    printf("\nEnter How many amount To be Deposit\n");
    scanf("%d",&iCash);

    printf("\nInsert Deposite Money into below Window \n");
    UpdateACCountX( iCash);
    iCashD = iCash ;
    printf("\nYour Updated  balance is %d\n",Cash);
    printf("\n********************************************************************\n");
}
    


void Cash_Deposite()
{
    int iChance=3;
    for(int iCnt=1 ; iCnt <=3 ; iCnt++)
    {
        printf("\n You have only %d Chance to enetr in your Bank account \n",iChance);
        iChance = iChance-1 ;
        printf("\nPlease Enter Your Valide PIN:\t");
        scanf("%d",&ipin);
        if(iPIN == ipin)
        {
            CFBalance();
            CFCash_Deposite();
            return ;

        }
        else
        {
            printf("\nSorry you enter Invalide pin:\n");
            printf("\nYou lost Your %d chance \n",iCnt);
        }

    }
            printf("\nWait for some time , Try again latter\n");
            printf("\nSorry for the inconvienece service\n");
            return ;

}


int main()
{
    printf("\n 'Welcome To The SBI ATM , Motala' \n");
    printf("**************************************\n");

    printf("\nPlease Insert Your Bank Card\n");
    int iCase6= 6 ;
    int iCnt=1 ;
    int iNo = 0;
        
    while(iCase6 != iNo)
    {
        iCnt++ ;
        printf("\n Check Balance Press :          -1\n");
        printf("\n Check MINI statement  Press :  -2\n");
        printf("\n Withdraw Money  Press:         -3\n");
        printf("\n Change PIN :                   -4\n");
        printf("\n Cash Deposite :                -5\n");
        printf("\n Exist From Bank Account Enter: -6\n");
      
        
        printf("\nPlease Enter any one Above Number Which perfrom your banking operations\n");
        scanf("%d",&iNo);


        switch (iNo)
        {
            case 1: 
                    printf("\nYour Choice is Check Balance \n ");
                    Check_Balance();
            break;

            case 2:
                    printf("\nYour Choice is Check MINI statement\n ");
                    Check_MINI_statement();
            break;

            case 3:
                    printf("\nYour Choice is Withdraw Money  Press\n ");
                    Withdraw_Money();
            break;
            
            case 4:
                    printf("\nYour Choice is Change PIN\n ");
                    Change_PIN();
            break;

            case 5:
                    printf("\nYour Choice is Cash Deposite \n");
                    Cash_Deposite();
            break;
            case 6:
                    printf("\nThank you For Visiting SBI ATM, Motala \n");
                    printf("\nYou Are Succesfully logout From your Account \n");
                    printf("\n Please Collect Your ATM card Before Leaving ATM \n");
            break;

            default:  
                    printf("\nYou Enter Wrong Choice For banking Operations\n");
            break;

        }
    }
    return 0 ;
}
