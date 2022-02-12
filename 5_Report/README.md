# Report :

# Requirements


# Description:
Bank Management system  : The project helps the user to perform banking activities similar to  real bank. and it is an application for maintanining a persons account in a bank and this system provides the access for  the customer to create an account,deposit/withdraw the cash from his account, and also helps to view the details of transaction.and the data to be stored is Account number,Name,Balance in account and we can Assume maximun of 20 customers in the bank .This particular file contains all the details of requirement collection from user end.

# SWOT ANALYSIS
Strength : with help of customers name  and account number , User can check all the banking Activities.

* checking customers records 
* Depositing Amount :This feature is used to add money to an existing customers account 
  and the added money will be updated in the data base.
* Withdrawing Amount : This features is used to withdraw money from an account.
* viewing tansaction details :An option for checking available balance and also helps to view the details of transaction.

Weakness : If the account number is wrong No activities can be done.

Opportunity : user can Deposit, withdraw amount and can view details.

Threats  : If the account number is wrong No activities can be done.

# 4W's and 1'H

# Who:
Everyone can use the bank management system who want to have benifit of banking.

# What:
Bank management sysem is mainly concerned to Cover the major Banking activities in sigle application.

# When:
User can use this application by the time he decides to deposit/withdraw/view the transaction details.

# Where:
User can can access this application using any C compiler.

# How:
Implementation is done using C language. And also used multifile concept.

# Detail requirements
High Level Requirements:
* System Shall be able to see customer records
* User shall Deposit Money
* User shall Withdraw Money
* User shall View the transaction Details

Low Level Requirements :
* User can have transaction only if user has Account
* System Shall be able to check customer records


# Architecture :
##Behavior Diagram:

# High level Design

## figure 1.1 Use Case Diagram

![usecase2](https://user-images.githubusercontent.com/98826329/153616762-4e042ea7-7aa5-427f-8546-23aff43f29b5.png)

# Low Level Design

## Figure 1.2 Activity Diagram

![Activity diagram](https://user-images.githubusercontent.com/98826329/153613389-9dadc25b-f038-4688-833c-f068fcab5847.png)



## Usecase Diagram :
![use case daigram](https://user-images.githubusercontent.com/98826329/153703938-f659f148-2187-4f4b-a429-6b9c27ef4a83.png)
![usecase2](https://user-images.githubusercontent.com/98826329/153704355-1a21071f-e055-4127-8cb1-ccad9aa03d79.png)

## Activity diagram :
![Activity diagram](https://user-images.githubusercontent.com/98826329/153704032-35ebf66b-6617-4c94-a7be-ff673f5834c6.png)







# Implementation :
#include <stdio.h>

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;

    printf("Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    do
    {

        printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, account_no, amount);
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct customer list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].balance = 0;
    }
}

void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    }
}

int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        }
    }
    return  - 1;
}

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    }
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    }
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    }
}

# Testplan :


# TEST PLAN:
## Table no: High level test plan
|Test ID | Description |  Exp I/P   |   Exp O/P   |   Actual Out   |   Type Of Test   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR1 | Checking customer record| Name:abc Account Number:123456789  |                         |                                |Requirement| 
|HLR2 |Deposit Amount|	1000  | 	Your current available bank balance is 1000|	Your current available bank balance is 1000   |  Requirement based |                   
|HLR3	|withdraw Amount|	3000 |	Sorry, You dont have enough money in your account	|Sorry, You dont have enough money in your account	| Requirement based|
|HHR4|	Entering wrong account no|	qqqrdfcf|	wrong account no |	invaild	|Boundary based|
|HHR4 |Entering wrong name	|Lakshmi|	wrong name |invaild		|Boundary based|



# Table no: Low level test plan
|Test ID|	Description|	Exp IN	| Exp OUT |	Actual Out	| Type Of Test |
|:-----|:------------|:---------|:--------|:------------|:-------------|
|LLR1	|If user enters wrong Account Number|	000000000	|Wrong account number |	Wrong account number | Requirement  |
|LLR2	|If wrong choice choosen|	7	| Invalid choice	| Exit|	Scenario based|

                                    
                                                                


