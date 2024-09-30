#include <stdio.h>
#include <strings.h>

int main()
{
    char password[10] = "NOTHING";
    char checkpass[10];

    printf("Digite a senha correta:");
    gets(checkpass);

    if (strcmp(checkpass, password) == 0)
    {
        printf("\nSenha valida!\n");
    }
    else
    {
        printf("\nSenha errada!!\n");
    }
    return 0;
}
