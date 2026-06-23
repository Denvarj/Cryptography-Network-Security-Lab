#include<stdio.h>

int main()
{
    char issuer[50];
    char subject[50];
    int validity;

    printf("Enter Issuer Name: ");
    scanf("%s",issuer);

    printf("Enter Subject Name: ");
    scanf("%s",subject);

    printf("Enter Validity Days: ");
    scanf("%d",&validity);

    printf("\nCertificate Details\n");
    printf("Issuer  : %s\n",issuer);
    printf("Subject : %s\n",subject);

    if(validity>0)
        printf("Certificate Status : VALID");
    else
        printf("Certificate Status : EXPIRED");

    return 0;
}
