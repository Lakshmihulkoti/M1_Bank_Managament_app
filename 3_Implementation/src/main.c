#include main

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