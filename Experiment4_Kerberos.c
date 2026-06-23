#include<stdio.h>
#include<string.h>

int main()
{
    char username[20];
    char password[20];

    printf("Enter Username: ");
    scanf("%s",username);

    printf("Enter Password: ");
    scanf("%s",password);

    if(strcmp(username,"student")==0 &&
       strcmp(password,"12345")==0)
    {
        printf("\nAuthentication Server Verified User\n");
        printf("Ticket Granting Ticket Generated\n");
        printf("Service Ticket Issued\n");
        printf("Access Granted\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    return 0;
}
