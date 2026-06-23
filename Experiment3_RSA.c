#include<stdio.h>

int main()
{
    int message;
    int privateKey=7;
    int publicKey=19;

    int signature;
    int verified;

    printf("Enter Message: ");
    scanf("%d",&message);

    signature=(message*privateKey)%33;

    printf("Generated Signature = %d\n",signature);

    verified=(signature*publicKey)%33;

    printf("Verified Value = %d\n",verified);

    if(verified==message)
        printf("Signature Verified Successfully");
    else
        printf("Verification Failed");

    return 0;
}
