#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "bank.h"

int main()
{
    char option;
    int num_account=0;
    while(1)
    {
        printf("\n***Welcome***\n");
        display_options();
        printf("Please enter any options (1/2/3/4/5/6) to continue:");
        option=getch();
        printf("%c\n",option);
        switch(option)
        {
            case '1': 
                    Create_new_account();
                    break;
            case '2':
                    Cash_Deposit();
                    break;
            case '3':
                    Cash_withdrawal();
                    break;
            case '4':
                    Account_information();
                    break;
            case '5':return 0;
            case '6':system("cls");
                    break;
            default: system("cls");
                   printf("Please Enter any one of the options");
                   printf("(1,2,3,4,5,6) to Continue \n");
                   break;
        }
    }
    return 0;
}