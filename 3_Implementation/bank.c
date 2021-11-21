#include "bank.h"
#include "string.h"

typedef struct acc_type
{
    char bank_name[20];
    char bank_branch[20];
    char acc_holder_name[30];
    int acc_number;
    char acc_holder_address[100];
    float avl_balance;
}Acc_detail;
Acc_detail account[20];
void display_options()
{
    printf("1. Create New Account \n");
    printf("2. Cash Deposit \n");
    printf("3. Cash Withdrawal \n");
    printf("4. Account Information \n");
    printf("5. Log out");
    printf("6. Clear the Screen and Display Available");
    printf("Options \n\n");
}

void Create_new_account()
{
    char bank_name[30];
    char bank_branch[30];
    char acc_holder_name[30];
    int acc_number;
    char acc_holder_address[120];
    float avl_balance=0;
    fflush(stdin);
    printf("Enter Bank Name:");
    scanf("%s",&bank_name);
    printf("Enter Bank Branch:");
    scanf("%s",&bank_branch);
    printf("Enter Your Name:");
    scanf("%s",&acc_holder_name);
    printf("Enter the account number(1-10):");
    scanf("%d",&acc_number);
    printf("Enter Account Holder Address:");
    scanf("%s",&acc_holder_address);
    strcpy(account[acc_number-1].bank_name,bank_name);
    strcpy(account[acc_number-1].bank_branch,bank_branch);
    strcpy(account[acc_number-1].acc_holder_name,acc_holder_name);
    strcpy(account[acc_number-1].acc_number=acc_number);
    strcpy(account[acc_number-1].acc_holder_address,acc_holder_address);
    account[acc_number-1].avl_balance=avl_balance;

    printf("\nAccount Created Successfully \n\n");
    printf("Bank Name : %s \n",account[acc_number-1].bank_name);
    printf("Bank Branch: %s \n",account[acc_number-1].bank_branch);
    printf("Account Holder Name: %s \n",account[acc_number-1].acc_holder_name);
    printf("Account Number: %d \n",account[acc_number-1].acc_number);
    printf("Address of Account Holder: %s \n",account[acc_number-1].acc_holder_address);
    printf("Balance Available: %f \n",account[acc_number-1].avl_balance); 
}

void Account_information()
{
    register int num_acc=0;
    while (strlen(account[num_acc].bank_name>0))
    {
        printf("\nBank Name: %s \n",account[num_acc].bank_name);
        printf("\nBank Branch: %s \n",account[num_acc].bank_branch);
        printf("\n Name of the Account Holder: %s \n",account[num_acc].acc_holder_name);
        printf("\nAccount Number: %d \n",account[num_acc].acc_number);
        printf("\nAddress Of Account Holder: %s \n",account[num_acc].acc_holder_address);
        printf("\nAvailable Balance: %f \n",account[num_acc].avl_balance);
        num_acc++;
    }
}

void Cash_Deposit()
{
    auto int acc_no;
    float add_money;
    printf("Enter Account Number in which you want to deposit money:");
    scanf("%d",&acc_no);
    printf("\nCurrent Balance is: %f \n",account[acc_no-1].avl_balance);
    printf("Enter amount you want to add:");
    scanf("%d",&add_money);
    
    while(acc_no=account[acc_no-1].acc_number)
    {
        account[acc_no-1].avl_balance=account[acc_no-1].avl_balance+add_money;
        printf("\nUpdated Balance of %d: %f \n",acc_no,account[acc_no-1].avl_balance);
        break;
    }acc_no++;
}

void Cash_withdrawal()
{
    auto int acc_no;
    float deduct_money;
    printf("Enter Account Number in which you want to withdraw money:");
    scanf("%d",&acc_no);
    printf("\nCurrent Balance of %d is: %f \n",account[acc_no-1].avl_balance);
    printf("Enter amount you want to withdraw:");
    scanf("%d",&deduct_money);

    while(acc_no=account[acc_no-1].acc_number)
    {
        account[acc_no-1].avl_balance=account[acc_no-1].avl_balance-deduct_money;
        printf("\nUpdated Balance of %d is: %f \n",account[acc_no-1].avl_balance);
        break;        
    }acc_no++;
}