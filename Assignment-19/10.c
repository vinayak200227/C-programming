// 10. Create an authentication system.It should be menu driven.
#include<stdio.h>

int main()
{
    char password[10], username[10], ch;
    int i;

    printf("Enter User name: ");
    gets(username);

    printf("Enter the password < any 8 charactets> :");
    for(i = 0;i<8;i++)
    {
        ch = getchar();
        password[i] = ch;
        ch = '*';
        printf("%c", ch);
    }
     password[i] = '\0';

     // Original password printed
     printf("\n Your password is :");
     for (int i = 0; i < 8; i++)
     {
        printf("%c",password[i]);
     }

     return 0;
}